#include <bits/stdc++.h>
using namespace std ;
#define ll long long
#define ull unsigned long long
#define fixed(_) fixed << setprecision(_)
#define sz(x) int(x.size())
#define all(x) x.begin(), (x).end()
#define rall(x) x.rbegin(), (x).rend()
#define TxtIO  freopen("katryoshka.in","r",stdin);// freopen("output.txt","w",stdout);
#define el '\n'
#define ff first
#define ss second
#define yes cout << "YES" << el
#define yess cm (cout << "YES" << el)
#define no cout << "NO" << el
#define noo cm(cout << "NO" << el)
#define none cm (cout << "-1" << el)
#define maxz(x, y) x = max(x, y)
#define minz(x, y) x = min(x, y)
#define FOR(i, n) for(int i = 0 ; i < (n); ++i)
#define oo LONG_LONG_MAX
#define io INT_MAX
#define srt(x) sort(x.begin(),x.end())
#define rsrt(x) sort(x.rbegin(),x.rend())
const int mod=1e9+7;
const int N=2e5+5;
#define show(x)  cout << #x << " = " << x << '\n'
#define cvc(x) for (auto &i : x) cin >> i ;
#define cm return void
int psh() {int x; cin >> x;return x ;}
# define mod(a,b) ((a - 1) % b + b) % b;
#define vct(n) vector<int>v(n) ; \
 cvc(v) ;
// sort(a+1,a+n+1,[](long long x,long long y){return abs(x)>abs(y);});
void solllve () ;

int main()
{

    //  TxtIO
    cin.sync_with_stdio(0); cin.tie(0);
    int t = 1 ;
  //  cin >> t ;

    while (t--)
    {
        solllve() ;
    }
    return 0;
}





bool vis[1000] ;
void dijk(int src , vector<vector<pair<int,int>>>&grf)
{
    int n = grf.size() ;
    priority_queue<pair<int,int>> next ;
    vector<int>dist(n,io),pre(n,-1);
    dist[src]=0 ; pre[src] = src ;
    next.push({0,src}) ;
    while (!next.empty())
    {
        int u = next.top().second ;
        next.pop() ;
        if (vis[u]) continue;
        vis[u]|=1 ;
        for (auto e : grf[u])
        {
            int v = e.first ;
            int c = e.second ;
            if (dist[u]+c<dist[v])
            {
                dist[v] = dist[u]+c ;
                pre[v] = u;
                next.push({-dist[v],v}) ;
            }
        }
    }
    for (int i=1 ; i<n ; i++) cout << i << " : " << dist[i] << el ;

}

void solllve()
{
    int n ; cin >> n ;
    vector<string>v(n) ;
    cvc(v) ; srt(v) ;
    cout << v[n/2] << el ;



}