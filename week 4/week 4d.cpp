#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
	multiset<ll>s;
	multiset<ll>::iterator it;
	ll n,i,c=0;
	cin>>n;ll a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	s.insert(a[0]);
	for(i=1;i<n;i++)
	{
	    s.insert(a[i]);
	    it=s.upper_bound(a[i]);
	    c+=distance(it,s.end());
	}
	cout<<c;
	return 0;
}