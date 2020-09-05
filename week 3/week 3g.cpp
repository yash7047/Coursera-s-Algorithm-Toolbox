#include<bits/stdc++.h>
using namespace std;
bool isgreater(string x,string y)
{
    return (y+x>x+y);
}
int main() 
{
    vector<string>v;
	long long int n,i,j;
	cin>>n;
	string a[n],s;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=1;i<n;i++)
	{
	    for(j=0;j<n-i;j++)
	    {
	        if(isgreater(a[j],a[j+1]))
	        swap(a[j],a[j+1]);
	    }
	}
	for(i=0;i<n;i++)
	s+=a[i];
	cout<<s;
	return 0;
}