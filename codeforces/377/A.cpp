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
    const int N = 1e5 +5 ;
    map<int,int>cnt ;
    bool vis[505][505] ;
    char a[505][505] ;
    int n,m,k ;
    int dr[] = {0,0,1,-1};
    int dc[] = {-1,1,0,0};
    bool val (int i , int j)
    {
        return i>=0 and j>=0 and i<n and j<m and a[i][j]!='#' ;
    }
    int emp ;
    int lvl  ;
    void dfs(int i , int j )
    {
        if (lvl == emp) return;
        lvl+=!vis[i][j] ;
        vis[i][j]|=1 ;
        for (int l = 0; l < 4; ++l) {
            int nx = i+dr[l];
            int ny = j+dc[l] ;
            if ( val(nx,ny) and !vis[nx][ny] )
            {
              dfs(nx,ny) ;
            }
        }


    }
void solllve()  {
    cin >> n >> m >> k ;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j] ;
            emp+=a[i][j]=='.' ;
        }
    }
    emp-=k ;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (a[i][j]=='.')
            {
                dfs(i,j) ;
                goto z ;
            }
        }
    }
    z:{};
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (!vis[i][j] and a[i][j]=='.')
            {
                cout << 'X' ;
            }
            else cout << a[i][j] ;
        }
        cout << el;
    }
    




}



/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */