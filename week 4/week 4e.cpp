#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
    vector<pair<ll,char>>v;
    map<ll,ll>mp;
	ll s,p,i,j,cnt=0;
	cin>>s>>p;
	ll a[s],b[s],c[p];
	for(i=0;i<s;i++)
	{
	    cin>>a[i]>>b[i];
	    v.push_back(make_pair(a[i],'l'));
	    v.push_back(make_pair(b[i],'r'));
	}
	for(i=0;i<p;i++)
	{
	    cin>>c[i];mp[c[i]]=0;
	    v.push_back(make_pair(c[i],'p'));
	}
	sort(v.begin(),v.end());
	for(auto i: v)
	{
	    if(i.second=='l') cnt++;
	    else if(i.second=='r') cnt--;
	    else mp[i.first]=cnt;
	}
	for(i=0;i<p;i++)
	cout<<mp[c[i]]<<" ";
	return 0;
}