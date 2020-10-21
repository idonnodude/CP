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
        bool b=true;
        F(i,0,n)
        {
            cin>>a[i];
            if(a[i]>x||a[i]==x&&(y==0||a[i]==a[y-1])&&i==y+1)x=a[i],y=i;
        }
        sort(a,a+n);
        if(a[0]!=a[n-1])cout<<y+1<<endl;
        else cout<<"-1\n";
    }
}