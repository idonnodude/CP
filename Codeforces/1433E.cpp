/********************Code by Yash***************************
************************************************************/
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define ll long long
#define endl "\n"
#define pb push_back
#define F(i, a, b) for(i = a; i < b; ++i)
#define mod 1000000007
#define all(c) c.begin(), c.end()
#define tr(container, it) for(auto it = container.begin(); it != container.end(); it++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll n,i,x,y,z;
    cin>>n;
    ll a[n+1];
    a[0]=1ll;
    F(i,1,n+1)
    a[i]=i*a[i-1];
    // cout<<a[n]<<endl;
    y=a[n];
    y*=2ll;
    y/=n*n;
    // y/=a[n/2];
    cout<<y;
}