#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
	ll n,m,i,j;
	cin>>n;ll a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>m;ll b[m];
	for(i=0;i<m;i++)
	cin>>b[i];
	ll l[n+1][m+1];
	for(i=0;i<=n;i++)
	{
	    for(j=0;j<=m;j++)
	    {
	        if(i==0||j==0)
	        l[i][j]=0;
	        else if(a[i-1]==b[j-1])
	        l[i][j]=1+l[i-1][j-1];
	        else
	        l[i][j]=max(l[i-1][j],l[i][j-1]);
	    }
	}
	cout<<l[n][m];
	return 0;
}