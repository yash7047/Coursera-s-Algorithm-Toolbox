#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 
int main() 
{
    vector<pair<long int,long int>>v;
    vector<long int>v1;
	long int n,i,x,y,sec;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    cin>>x>>y;
	    v.push_back(make_pair(x,y));
	}
	sort(v.begin(),v.end(),sortbysec);
	sec=0;
	v1.push_back(v[sec].second);
	for(i=0;i<n;i++)
	{
	    if(v[i].first>v[sec].second)
	    sec=i , v1.push_back(v[sec].second);
	}
	cout<<v1.size()<<endl;
	for(auto i: v1)
	cout<<i<<" ";
	return 0;
}