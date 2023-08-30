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
    const int N = 505 ;
    int  n , m ;
    char c ;
void solllve()  {


    map<int,int>row , col , L , U ;
    vector<pair<int,int>>LR ;
    vector<pair<int,int>>UD ;
    cin >> n >> m ;
    char ac[N][N] ;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> c ;
            if (c=='L') LR.emplace_back(j,i) , L[j]++ ;
            if (c=='U') UD.emplace_back(i,j) , U[i]++ ;
            if (c!='.') row[i]++ , col[j]++ ;
        }
    }
 //   for(auto i : row) if (i.second&1) none ;
  //  for(auto i : col) if (i.second&1) none ;
    if( LR.size() &1 or UD.size()&1 ) none ;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            ac[i][j]='.' ;
        }
    }
    for(auto i : L ) if(i.second&1) none ;
    for(auto i : U ) if(i.second&1) none ;
    std::sort(LR.begin(), LR.end()) ;
    std::sort(UD.begin(), UD.end()) ;
    for (int i = 0; i < LR.size() ; i+=2) {
        auto a = LR[i] ;
        auto b = LR[i+1] ;
//        cout << a.first << ' ' << a.second << el ;
//        cout << b.first << ' ' << b.second << el ;
        ac[a.second][a.first] = 'W' ;
        ac[a.second][a.first+1] = 'B' ;
        ac[b.second][b.first] = 'B' ;
        ac[b.second][b.first+1] = 'W' ;
    }
    for (int i = 0; i < UD.size() ; i+=2) {
        auto a = UD[i] ;
        auto b = UD[i+1] ;
        ac[a.first][a.second] = 'W' ;
        ac[a.first+1][a.second] = 'B' ;
        ac[b.first][b.second] = 'B' ;
        ac[b.first+1][b.second] = 'W' ;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << ac[i][j] ;
        }
        cout << el ;
    }




}

/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */