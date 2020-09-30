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
 
vi v[100001];
bool vis[100001];
int c[100001];
bool dfs(int n, int co)
{
    vis[n] = true;
    c[n] = co;
    for (auto i : v[n])
    {
        if (!vis[i])
        {
            if (dfs(i, !co) == false)
                return false;
        }
        else
        {
            if (c[n] == c[i])
                return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int n, m, i, x, y;
    cin >> n >> m;
    F(i, 0, m)
    cin >> x >> y, v[x].pb(y), v[y].pb(x);
    memset(vis, false, sizeof(vis));
    F(i, 1, n + 1)
    {
        if (!vis[i])
        {
            if (!dfs(i, 0))
            {
                cout << "IMPOSSIBLE";
                return 0;
            }
        }
    }
    F(i, 1, n + 1)
    cout << c[i] + 1 << " ";
}
