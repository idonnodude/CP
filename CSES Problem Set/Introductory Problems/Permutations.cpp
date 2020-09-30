/********************Code by Yash***************************
************************************************************/
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
 
    int n, i;
    cin >> n;
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    if (n == 4)
    {
        cout << "2 4 1 3";
        return 0;
    }
    for (i = n; i >= 1; i -= 2)
        cout << i << " ";
    for (i = n - 1; i >= 1; i -= 2)
        cout << i << " ";
}
