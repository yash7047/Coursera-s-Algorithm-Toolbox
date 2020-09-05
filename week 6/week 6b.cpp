#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
    int n,i,j,w,s=0,c=0;
    cin>>n; int a[n];
    for(i=0;i<n;i++)
    {cin>>a[i];s+=a[i];}
    if(n<3)
    cout<<"0";
    else if(s%3!=0)
    cout<<"0";
    else
    {
        w=s/3;
        int b[n+1][w+1];
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=w;j++)
            {
                if(i==0||j==0)
                b[i][j]=0;
                else if(a[i-1]>j)
                b[i][j]=b[i-1][j];
                else
                b[i][j]=max(a[i-1]+b[i-1][j-a[i-1]],b[i-1][j]);
                if(b[i][j]==w)
                c++;
            }
        }
        if(c<3)
        cout<<"0";
        else
        cout<<"1";
    }
	return 0;
}