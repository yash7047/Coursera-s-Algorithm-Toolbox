#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
ll bin(ll a[],ll l,ll r,ll b)
{
    if(l<=r)
    {
    ll mid=(l+r)/2;
    if(a[mid]==b)
    return mid;
    else if(a[mid]>b)
    return bin(a,l,mid-1,b);
    else if(a[mid]<b)
    return bin(a,mid+1,r,b);
    }
    return -1;
}
int main() 
{
	ll n,k,i,p;
	cin>>n;
	ll a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>k;
	while(k--)
	{
	    cin>>p;
	    cout<<bin(a,0,n-1,p)<<" ";
	}
	return 0;
}