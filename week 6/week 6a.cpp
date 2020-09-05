#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
    int n,W,i,j;
    cin>>W>>n; int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    int b[n+1][W+1];
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=W;j++)
        {
            if(i==0||j==0)
            b[i][j]=0;
            else if(a[i-1]>j)
            b[i][j]=b[i-1][j];
            else
            b[i][j]=max(a[i-1]+b[i-1][j-a[i-1]],b[i-1][j]);
        }
    }
    cout<<b[n][W];
    return 0;
}