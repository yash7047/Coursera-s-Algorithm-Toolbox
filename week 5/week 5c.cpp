#include<bits/stdc++.h>
using namespace std;
int main() 
{
	string s1,s2;
	cin>>s1>>s2;
	int i,j,n,m;
	n=s1.size();m=s2.size();
	int a[n+1][m+1]={0};
	for(i=0;i<=n;i++)
	a[i][0]=i;
	for(i=0;i<=m;i++)
	a[0][i]=i;
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=m;j++)
	    {
	        if(s1[i-1]==s2[j-1])
	        a[i][j]=a[i-1][j-1];
	        else
	        a[i][j]=1+min(a[i-1][j],min(a[i-1][j-1],a[i][j-1]));
	    }
	}
	cout<<a[n][m];
	return 0;
}