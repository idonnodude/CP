/********************Code by Yash***************************
*********************************************************/
#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
 
#define ll long long
#define endl "\n"
#define pb push_back
#define F(i, a, b) for (i = a; i < b; ++i)
#define mod 1000000007
#define all(c) c.begin(), c.end()
#define tr(container, it) for (auto it = container.begin(); it != container.end(); it++)
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    ll n, x = 0, i, j, y = 0ll;
    cin >> n;
    ll a[n];
    F(i, 0, n)
    {
        cin >> a[i];
        if (a[i] > x)
            x = a[i];
        else
            y += (-a[i] + x);
    }
    cout << y;
}
