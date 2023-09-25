// Generally, in life we may face problems that looks like
// so hard to deal with from the outside but once you tried to deal with them
// you would find that the most hard problem you should deal with is yourself ☻

#include <bits/stdc++.h>
using namespace std ;
#define lp(i,n) for(int i = 0; i < (n); ++i)
template<typename T>istream& operator>>(istream&i,vector<T>&v){lp(j,v.size())i>>v[j];return i;}
#define tenll(x) ((ll)1e##x)
#define ll long long
#define el '\n'
#define int ll
#define ull unsigned long long
#define cm return void
#define yes cout << "Yes" << el
#define yess cm (cout << "Yes" << el)
#define no cout << "No" << el
#define noo cm(cout << "No" << el)
#define none cm (cout << "-1" << el)
#define maxz(x, y) x = max(x, y)
#define minz(x, y) x = min(x, y)
#define show(x)  cout << #x << " = " << x << '\n'
#define setDP(arr) memset(arr,-1,sizeof arr)
#define cout(v) for(auto i : v)cout << i << ' ' ; \
cout << el ;
void __(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#endif
}


void solllve () ;
signed main()
{

    __() ;
    int t = 1 ;
//     cin >> t ;
    while (t--)
    {
        solllve() ;
    }
    return 0;
}
    const int N = 1e5+7 ;
    vector<int>v[N] ;
    bool vis[N] ;
    int c[N] ; 
    int n,m,mx=2e9,res ;
    void dfs(int i)
    {
        if (vis[i]) return;
        vis[i]|=1 ;
        minz(mx,c[i]) ;
        for(auto u : v[i])
        {
            dfs(u) ;
        }
    }


void solllve()  {
    cin >> n >> m ;
    for (int i = 0; i < n; ++i) {
        cin >> c[i] ;
    }
    for (int i = 0; i < m; ++i) {
        int x,y ;cin >> x >> y ;
        --x,--y ;
        v[x].push_back(y) ;
        v[y].push_back(x) ;
    }
    for (int i = 0; i < n; ++i) {
        if (!vis[i])
        {
            mx=2e9 ;
            dfs(i) ;
            res+=mx ;
        }
    }
    cout << res << el ;



}



/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */