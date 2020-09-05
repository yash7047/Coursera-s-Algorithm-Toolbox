#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void partition(ll a[], ll l, ll r, ll &i, ll &j) 
{ 
    i = l-1, j = r; 
    ll p = l-1, q = r; 
    ll v = a[r]; 
    while (true) 
    {  
        while (a[++i] < v);
        while (v < a[--j]) 
            if (j == l) 
                break; 
        if (i >= j) break; 
        swap(a[i], a[j]); 
        if (a[i] == v) 
        { 
            p++; 
            swap(a[p], a[i]); 
        }  
        if (a[j] == v) 
        { 
            q--; 
            swap(a[j], a[q]); 
        } 
    } 
    swap(a[i], a[r]); 
    j = i-1; 
    for (int k = l; k < p; k++, j--) 
        swap(a[k], a[j]);
    i = i+1; 
    for (int k = r-1; k > q; k--, i++) 
        swap(a[i], a[k]); 
} 
void quicksort(ll a[], ll l, ll r) 
{ 
    if (r <= l) return; 
    ll i, j; 
    partition(a, l, r, i, j);
    quicksort(a, l, j); 
    quicksort(a, i, r); 
} 
int main() 
{
	ll n,i;
	cin>>n;ll a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}