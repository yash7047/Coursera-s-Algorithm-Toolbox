#include<bits/stdc++.h>
using namespace std;
long long piscano_period(long long x)
{
    long long p=0,c=1,tp,i;
    for(i=0;i<x*x;i++)
    {
        tp=(c+p)%x;
        p=c;
        c=tp;
        if(p==0&&c==1)
        return i+1;
    }
}
int main() 
{
	long long n,m,i,c,p,t;
	cin>>n>>m;
	if(n<=1)
	cout<<n;
	else
	{
	    n=n%piscano_period(m);
	    p=0;c=1;t=n;
	    for(i=1;i<n;i++)
	    {
	        t=(p+c)%m;
	        p=c;
	        c=t;
	    }
	    cout<<t%m;
	}
	return 0;
}