#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n,i;
	cin>>n;
	int a[n+1];
	a[0]=0;a[1]=1;a[3]=1;a[4]=1;a[2]=2;
	for(i=5;i<=n;i++)
	{
	    a[i]=min(a[i-1]+1,min(a[i-3]+1,a[i-4]+1));
	}
	cout<<a[n];
	return 0;
}