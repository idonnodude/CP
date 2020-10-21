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

    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,x,y=0,z;
        cin>>n;
        int a[n];
        vi v;
        F(i,0,n)
        {
            cin>>a[i];
            if(a[i])v.pb(i);
        }
        x=v.size();
        F(i,1,x)y+=v[i]-v[i-1]-1;
        cout<<y<<endl;
    }
}