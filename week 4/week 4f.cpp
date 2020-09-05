#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f first
#define s second
#define pb push_back
#define mkp make_pair
#define MAX 1e9+5
#define ld long double
bool sortbysec(const pair<ll,ll> &a,const pair<ll,ll> &b) 
{ 
    return (a.s < b.s); 
} 
ld dist(ll x,ll y,ll x1,ll y1)
{
    ld di;
    di=(x-x1)*(x-x1)+(y-y1)*(y-y1);
    return sqrt(di);
}
ld sdist2(vector<pair<ll,ll>> &st,ld dx)
{
    ld dy;
    ll n=st.size();
    sort(st.begin(),st.end(),sortbysec);
    for(ll i=0;i<n-1;i++)
    {
        for(ll j=i+1;j<n&&(st[j].s-st[i].s<dx);j++)
        {
            dy=dist(st[i].f,st[i].s,st[j].f,st[j].s);
            dx=min(dx,dy);
        }
    }
    return dx;
}
ld sdist1(vector<pair<ll,ll>> &v,ll l,ll r)
{
    ll n=r-l+1;
    if(n<=3)
	{
	    ld d=DBL_MAX;
	    for(ll i=l;i<r;i++)
	    {
	        for(ll j=i+1;j<=r;j++)
	        {
	            if(dist(v[i].f,v[i].s,v[j].f,v[j].s)<d)
	            d=dist(v[i].f,v[i].s,v[j].f,v[j].s);
	        }
	    }
	    return d;
	}
	else
	{
	ld dx,d1,d2;
    ll mid=(l+r)/2;
    d1=sdist1(v,l,mid);
    d2=sdist1(v,mid+1,r);
    dx=min(d1,d2);
    vector<pair<ll,ll>>st;
    for(ll i=0;i<n;i++)
    {
        if(abs(v[i].f-v[mid].f)<dx)
        st.pb(v[i]);
    }
    return min(dx,sdist2(st,dx));
	}
}
int main() 
{
    vector<pair<ll,ll>>v;
	ll n,i,j,x,y;
	ld d=DBL_MAX;
	cin>>n;
	for(i=0;i<n;i++)
	{cin>>x>>y;
	v.pb(mkp(x,y));}
	sort(v.begin(),v.end());
	ld sh;
	sh=sdist1(v,0,n-1);
	cout<<setprecision(9)<<sh;
	return 0;
}