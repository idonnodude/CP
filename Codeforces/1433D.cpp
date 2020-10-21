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
        int i,n,j,x=0,y=-1,z;
        cin>>n;
        int a[n];
        F(i,0,n)cin>>a[i];
        x=a[0];
        bool vis[n];
        vector<pair<int,int> > v;
        memset(vis,false,sizeof(vis));
        F(i,1,n)
        {
            if(a[i]!=x)vis[i]=true,v.pb({1,i+1}),y=i;
        }
        if(y!=-1)
        {
            cout<<"YES\n";
            F(i,1,n)
            if(!vis[i])v.pb({y+1,i+1});
            for(auto i:v)
            cout<<i.first<<" "<<i.second<<endl;
        }
        else cout<<"NO\n";  
    }
}