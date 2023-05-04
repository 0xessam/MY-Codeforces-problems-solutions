#include <bits/stdc++.h>
using namespace std;
typedef long long ll ; typedef vector<int> vi ; typedef pair<int,int> ii ;
const ll oo = LONG_LONG_MAX ; const int io =  INT_MAX ; const int N = 2e5+7 ;
#define ff first
#define ss second
#define el '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define _906 cin.sync_with_stdio(0); cin.tie(0);
#define none cm (cout << "-1" << el)
#define maxz(x, y) x = max(x, y)
#define minz(x, y) x = min(x, y)
#define FOR(i, n) for(int i = 0 ; i < (n); ++i)
#define all(x) x.begin(), (x).end()
#define cm return void
#define cvc(x) for (auto &i : x) cin >> i ;
#define show(x)  cout << #x << " = " << x << '\n'
void BURN_OUT () ;



signed int main()
{ _906 int t = 1 ; /*cin >> t*/ ; while (t--) {BURN_OUT() ;} return 0 ; }

vector<vector<int>>adj ;
    vector<bool>vis ;
int mx = -1 ;
void dfs(  int v, vector<vector<int>>&adj , int x)
{
    if (vis[v]) return;
    vis[v]=1 ;
    maxz(mx,x) ;
    for (auto i : adj[v])
    {
        if(!vis[i])
        dfs(i , adj , x+1) ;
    }

}


void BURN_OUT()
{
    int n ; cin >> n ;
    adj = vector<vector<int>>(n+1) ;
    for (int i = 1; i <= n ; ++i) {
        int u ; cin >> u ;
        if(~u) adj[u].push_back(i) ;
    }
    for (int i = 1; i <=n ; ++i) {
        vis =  vector<bool>(100000,0);
        dfs( i, adj,1) ;
    }
    cout << mx << el ;


}