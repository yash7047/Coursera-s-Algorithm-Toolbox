#include<bits/stdc++.h>
using namespace std;
int main() 
{
    vector<long int>v;
	long int n,i,s=0,b;
	cin>>n;
	double a;
	a=(-1+sqrt(1+8*n))/2;
	if(floor(a)==ceil(a))
	{
	    cout<<a<<endl;
	    for(i=1;i<=a;i++)
	    cout<<i<<" ";
	}
	else
	{
	    for(i=1;i<=n;i++)
	    {
	        n=n-i;
	        if(n<=i)
	        v.push_back(n+i);
	        else if(n==0)
	        {v.push_back(i);break;}
	        else
	        v.push_back(i);
	    }
	    cout<<v.size()<<endl;
	    for(auto j: v)
	    cout<<j<<" ";
	}
	return 0;
}