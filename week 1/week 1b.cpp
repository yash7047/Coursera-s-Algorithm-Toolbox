#include<bits/stdc++.h>
using namespace std;
int main() 
{
	long long int n,i;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	cout<<a[n-1]*a[n-2];
	return 0;
}