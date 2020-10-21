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

    ll t;
    cin>>t;
    while(t--)
    {
        ll x,i=0,j,y,z;
        cin>>x;
        y=x%10;
        z=(y-1)*10ll;
        while(x!=0)
        x/=10,++i;
        y=i*(i+1);
        y/=2;
        z+=y;
        cout<<z<<endl;
    }

}