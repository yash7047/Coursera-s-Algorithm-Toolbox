#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n,c=0;
	cin>>n;
	c+=n/10;n=n%10;
	c+=n/5;n=n%5;
	c+=n;
	cout<<c;
	return 0;
}