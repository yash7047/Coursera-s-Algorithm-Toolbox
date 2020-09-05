#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll M[30][30],m[30][30];
ll eval(ll x,ll y,char op)
{
    if(op=='+') return x+y;
    else if(op=='-') return x-y;
    else return x*y;
}
ll maxvalue(ll num[],char ch[],ll i,ll j)
{
    ll a,b,c,d,mx=INT_MIN,mn=INT_MAX,k;
    if(i==j)
    M[i][j]=num[i] , m[i][j]=num[i];
    else
    {
        for(k=i;k<j;k++)
        {
            a=eval(M[i][k],M[k+1][j],ch[k]);
            b=eval(m[i][k],m[k+1][j],ch[k]);
            c=eval(M[i][k],m[k+1][j],ch[k]);
            d=eval(m[i][k],M[k+1][j],ch[k]);
            mx=max(mx,max(a,max(b,max(c,d))));
            mn=min(mn,min(a,min(b,min(c,d))));
        }
        M[i][j]=mx;m[i][j]=mn;
    }
}
int main() 
{
    ll n,i,j,k,p;
    string s;
    cin>>s;n=s.length();
    j=k=0;
    ll num[n];char c[n];
    for(i=0;i<n;i++)
    {
        if(i%2==0) num[j++]=s[i]-48;
        else c[k++]=s[i];
    }
    for(i=0;i<j;i++)
    {
        for(p=0;p<j;p++)
        maxvalue(num,c,p,p+i);
    }
    cout<<M[0][j-1];
	return 0;
}