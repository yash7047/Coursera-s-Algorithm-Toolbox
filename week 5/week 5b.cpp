#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
    stack<ll>s;
    ll n,i,t1,t2,t3; cin>>n;
    ll a[n+1];
    a[1]=0;a[2]=a[3]=1;
    for(i=4;i<=n;i++)
    {
        a[i]=a[i-1]+1;
		if(i%2==0)
		a[i]=min(a[i/2]+1,a[i]);
		if(i%3==0)
		a[i]=min(a[i/3]+1,a[i]);
    }
    for(i=n;i>1;)
    {
        s.push(i);
        if(a[i-1]+1==a[i])
		i=i-1;
		else if(i%2==0&&a[i/2]+1==a[i])
		i=i/2;
		else if(i%3==0&&a[i/3]+1==a[i])
		i=i/3;
    }
    s.push(1);
    cout<<a[n]<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
	return 0;
}