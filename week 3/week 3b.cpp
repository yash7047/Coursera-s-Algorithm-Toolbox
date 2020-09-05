#include<bits/stdc++.h>
using namespace std;
int largest(double f[],int n)
{
    int l=0;
    for(int i=1;i<n;i++)
    if(f[i]>f[l])
    l=i;
    f[l]=-1.0;
    return l;
}
int main() 
{
	long int i,n,s,k;float w;
	cin>>n>>w;k=n;
	double a1[n],a2[n],b[n],ans=0.0;
	for(i=0;i<n;i++)
	{
	    cin>>a1[i]>>a2[i];
	    b[i]=a1[i]/a2[i];
	}
	while(w>0&&k>0)
	{
	    s=largest(b,n);
	    if(a2[s]<=w)
	    ans+=a1[s],w-=a2[s];
	    else
	    ans+=(a1[s]*w)/a2[s] , w=0;
	    k--;
	}
	cout<<setprecision(11)<<ans;
	return 0;
}