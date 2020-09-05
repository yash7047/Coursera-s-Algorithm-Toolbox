#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int main() 
{
	long long int x,y,s;
	cin>>x>>y;
	s=gcd(x,y);
	cout<<(x*y)/s;
	return 0;
}