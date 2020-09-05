#include<bits/stdc++.h>
using namespace std;
int main() 
{
	long long int a[61];
	a[0]=0;a[1]=1;
	for(int i=2;i<61;i++)
	a[i]=a[i-1]+a[i-2];
	long long int n,a1,b1;
	cin>>n;
	a1=a[n%60]%10;b1=a[(n+1)%60]%10;
	cout<<(a1*b1)%10;
	return 0;
}