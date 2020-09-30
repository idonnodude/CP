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
 
    string s;
    cin >> s;
    char c;
    int i, l = s.length(), x = 0, y = 0;
    c = s[0];
    x = 1;
    F(i, 1, l)
    {
        if (s[i] == c)
            ++x;
        else
        {
            if (x > y)
                y = x;
            x = 1;
            c = s[i];
        }
    }
    if (y < x)
        y = x;
    cout << y;
}
