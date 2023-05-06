// https://www.youtube.com/watch?v=zzyDvsnXGg4
/* لم يَكُنْ رسولُ اللَّهِ صلَّى اللَّهُ عليهِ وسلَّمَ يَدَعُ هؤلاءِ الكلمات
  حينَ يُمسي وحينَ يصبحُ اللَّهمَّ إنِّي أسألُكَ العفو والعافيةَ في الدُّنيا والآخرةِ
  اللَّهمَّ إنِّي أسألُكَ العفوَ والعافيةَ في ديني ودُنْيايَ وأَهْلي ومالي اللَّهمَّ استُر عَوْراتي وآمِن رَوعاتي
  اللَّهمَّ احفَظني من بينِ يديَّ ومن خَلفي وعن يميني وعن شِمالي ومِن فَوقي وأعوذ بعَظمتِكَ أن أُغتالَ مِن تَحتي
  */
// There is no need for sadness and despair
#include <bits/stdc++.h>
using namespace std ;
#define ll long long
#define ull unsigned long long
#define fixed(_) fixed << setprecision(_)
#define sz(x) int(x.size())
#define all(x) x.begin(), (x).end()
#define rall(x) x.rbegin(), (x).rend()
#define TxtIO  freopen("hobz.in","r",stdin);// freopen("output.txt","w",stdout);
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
# define mod(a,b) ((a - 1) % b + b) % b;
#define vct(n) vector<int>v(n) ; \
 cvc(v) ;
// sort(a+1,a+n+1,[](long long x,long long y){return abs(x)>abs(y);});
void solllve () ;

int main()
{

    // TxtIO
    cin.sync_with_stdio(0); cin.tie(0);
    int t = 1 ;
    cin >> t ;

    while (t--)
    {
        solllve() ;
    }
    return 0;
}

bool vis[1005][1005] ;
ll ans=0 ;
void dfs(vector<vector<int>>& grid , int x , int y)
{
    if (x>=grid.size() or x<0 or y>=grid[0].size() or y<0) return ;
    if (vis[x][y] or grid[x][y]==0) return ;
    ans+=grid[x][y];
    vis[x][y]=1 ;
    dfs(grid , x , y+1) ;
    dfs(grid , x , y-1) ;
    dfs(grid , x+1 , y) ;
    dfs(grid , x-1 , y) ;

}

void solllve()
{
    ll mx  = -1 ;
    int n,m ; cin >> n >> m ;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++) vis[i][j]=0 ;
    }
    vector<vector<int>>grid(n) ;
    for (int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            int x ; cin >> x;
            grid[i].push_back(x) ;
        }
    }
    for (int i=0 ; i<grid.size() ; i++)
    {
        for (int j=0 ; j<grid[0].size() ; j++)
        {
            if (!vis[i][j] or (i+1==grid.size() and j==grid[0].size()-1 ) )
            {
                ans=0 ;
                dfs(grid,i,j) ;
                mx=max(mx,ans) ;
            }
        }
    }
    cout << mx << el ;





}


