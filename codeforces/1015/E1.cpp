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
    // cin >> t ;
     while (t--)
     {
           solllve() ;
     }
       return 0;
}
   const int N = 105 ;
    char a[N][N] ;
    int n,m , cnt ;
    char dp[N][N] ;
    vector<pair<pair<int,int>,int>> res ;
    void solve( int i,int j , int mx)
    {
        if(i-mx>=0 and j-mx>=0 and i+mx<n and j+mx<m and a[i+mx][j]=='*'
        and a[i-mx][j]=='*' and a[i][j+mx]=='*' and a[i][j-mx]=='*' ) {
            dp[i][j]='.' ;
            dp[i+mx][j]='.' ;
            dp[i][j+mx]='.' ;
            dp[i-mx][j]='.' ;
            dp[i][j-mx]='.' ;
            solve(i, j, mx + 1);
        }
        else
        {
            res.push_back({{i+1,j+1},mx-1}) ;
        }

    }


void solllve()  {
    setDP(dp);
    cin >> n >> m ;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j] ;
            dp[i][j] = a[i][j] ;
            cnt+=a[i][j]=='*' ;
        }
    }
    for (int i = 1; i+1 < n; ++i) {
        for (int j = 1; j+1 < m; ++j) {
            if (a[i][j] == '*' and a[i+1][j] == '*' and a[i-1][j] == '*' and a[i][j-1] == '*' and a[i][j+1] == '*' )
            {
                solve(i,j , 0) ;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (dp[i][j]=='*') none ;
        }
    }
    cout << res.size() << el ;
    for(auto u : res) cout << u.first.first << ' ' << u.first.second << ' ' << u.second << el ;





}

/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */