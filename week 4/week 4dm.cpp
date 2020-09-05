#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 100005
ll merge(ll a[],ll l,ll mid,ll r)
{
    ll i,j,k,b[MAX],c=0;
    i=k=l;j=mid;
    while(i<=mid-1&&j<=r)
    {
        if(a[i]<=a[j])
        b[k]=a[i] , i++;
        else
        b[k]=a[j] , c+=(mid-i) , j++;
        k++;
    }
    while(i<=mid-1)
    {
        b[k]=a[i];
        i++;k++;
    }
    while(j<=r)
    {
        b[k]=a[j];
        j++;k++;
    }
    for(i=l;i<=r;i++)
    a[i]=b[i];
    return c;
}
ll mergesort(ll a[],ll l,ll r)
{
    ll c=0;
    if(l<r)
    {
        ll mid=(l+r)/2;
        c=mergesort(a,l,mid);
        c+=mergesort(a,mid+1,r);
        c+=merge(a,l,mid+1,r);
    }
    return c;
}
int main() 
{
	ll n,i,s;
	cin>>n;
	ll a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	s=mergesort(a,0,n-1);
	cout<<s;
	return 0;
}