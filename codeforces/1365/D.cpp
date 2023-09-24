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
     cin >> t ;
     while (t--)
     {
           solllve() ;
     }
       return 0;
}
    char g[55][55] ;
    bool vis[55][55] ;
    int n , m ;
       int dr[]={0,0,1,-1,1,1,-1,-1};
       int dc[]={1,-1,0,0,1,-1,1,-1};
   bool val(int i , int j)
   {
       return i>=0 and i<n and j>=0 and j<m ;
   }
   void blk(int i,int j)
   {
       for (int k = 0; k < 4; ++k) {
          int nx=i+dr[k] ;
          int ny=j+dc[k] ;
          if (val(nx,ny) and g[nx][ny]=='.')
              g[nx][ny]='#' ;
       }
   }
   void dfs(int i , int j)
   {
       if (vis[i][j]) return;
       vis[i][j] = 1 ;
       for (int k = 0; k < 4; ++k) {
           int nx=i+dr[k] ;
           int ny=j+dc[k] ;
           if (val(nx,ny) and g[nx][ny] != '#')
               dfs(nx,ny) ;
       }
   }


void solllve()  {
    ::memset(vis , 0 , sizeof vis) ;

    cin >> n >> m ;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> g[i][j] ;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (g[i][j] == 'B')  blk(i,j) ;
        }
    }
    if (g[n-1][m-1] == 'B' ) noo ;
   if(g[n-1][m-1] != '#') dfs(n-1,m-1) ;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (g[i][j] == 'G' and !vis[i][j] ) noo ;
            if (g[i][j] == 'B' and vis[i][j] ) noo ;
        }
    }
    yess ;



}



/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */