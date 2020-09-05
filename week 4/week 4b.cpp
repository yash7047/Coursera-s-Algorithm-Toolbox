#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
    unordered_map<ll,ll>mp;
	ll n,i,s,k=1;
	cin>>n;ll a[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	    mp[a[i]]++;
	}
	for(auto i: mp)
	{
	    if(i.second>n/2)
	    k=0;
	}
	if(k==0)
	cout<<"1";
	else
	cout<<"0";
	return 0;
}