#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
	ll n,m,p,i,j,k;
	cin>>n;ll a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>m;ll b[m];
	for(i=0;i<m;i++)
	cin>>b[i];
	cin>>p;ll c[p];
	for(i=0;i<p;i++)
	cin>>c[i];
	ll l[n+1][m+1][p+1];
	for(i=0;i<=n;i++)
	{
	    for(j=0;j<=m;j++)
	    {
	        for(k=0;k<=p;k++)
	        {
	        if(i==0||j==0||k==0)
	        l[i][j][k]=0;
	        else if(a[i-1]==b[j-1]&&a[i-1]==c[k-1])
	        l[i][j][k]=1+l[i-1][j-1][k-1];
	        else
	        l[i][j][k]=max(max(l[i-1][j][k],l[i][j-1][k]),l[i][j][k-1]);
	        }
	    }
	}
	cout<<l[n][m][p];
	return 0;
}