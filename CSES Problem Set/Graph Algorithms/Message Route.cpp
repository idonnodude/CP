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
 
vi v[100001];
bool vis[100001];
int d[100001],p[100001];
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    d[s] = 0;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (int i : v[x])
        {
            if (!vis[i])
            {
                q.push(i);
                p[i]=x;
                d[i] = d[x] + 1;
                vis[i] = true;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
 
    int n,m,i,x,y;
    cin>>n>>m;
    F(i,1,n+1)
    d[i]=-1,vis[i]=false;
    F(i,0,m)
    cin>>x>>y,v[x].pb(y),v[y].pb(x);
    bfs(1);
    if(d[n]==-1)
    cout<<"IMPOSSIBLE";
    else
    {
        cout<<d[n]+1<<endl;
        vi a;
        i=n;
        while(i!=1)
        {
            a.pb(p[i]);
            i=p[i];
        }
        for(auto itr=a.rbegin();itr!=a.rend();itr++)
        cout<<*itr<<" ";
        cout<<n;
    }
    
}
