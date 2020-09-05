#include<bits/stdc++.h>
using namespace std;
int main() 
{
	long int d,m,n,i,c=0,start;
	cin>>d>>m>>n;
	long int a[n+1];
	for(i=0;i<n;i++)
	cin>>a[i];
	a[n]=d;
	i=start=0;
	while(i<=n)
	{//cout<<start<<" ";
	    while(i<=n&&a[i]-start<=m)
	    i++;
	    if(a[i-1]==start)
	    {c=-1;break;}
	    c++;start=a[i-1];
	}
	if(c>0)
	cout<<c-1;
	else
	cout<<c;
	return 0;
}