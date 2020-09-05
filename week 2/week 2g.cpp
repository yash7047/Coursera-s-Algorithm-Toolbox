#include<bits/stdc++.h>
using namespace std;
int main() 
{
	long long int a[61];
	a[0]=0;a[1]=1;
	for(int i=2;i<61;i++)
	a[i]=a[i-1]+a[i-2]+1;
	long long int n,m,s,s1;
	cin>>m>>n;
	if(m==0)
	cout<<a[n%60]%10;
	else
	{
	    s=a[(m%60)-1]%10;
	    s1=a[n%60]%10;
	    if(s1<s)
	    s1+=10;
	    cout<<s1-s;
	}
	return 0;
}