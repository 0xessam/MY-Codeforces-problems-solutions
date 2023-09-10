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


void solllve()  {
    int n , m  ;cin >> n >> m ;
    vector<int>v(m) ;
    std::iota(v.begin(), v.end(),0ll) ;
    int p = 0 ;
    int res[n][m] ;
    for (int i = 0; i < n ; ++i) {
        for (int j = p; j < m + p; ++j) {
         //   show(j) ;
            res[i][j-p] = v[j%m];
        }
        p++ ;
    }
    for (int i = m-1; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            res[i][j]=j ;
        }
    }
    int mex[m] ;
    for (int i = 0; i < m; ++i) {
        mex[i]=0 ;
    }
    for (int i = 0 ; i < m ; ++i) {
        map<int,int>mp ;
        int cur = 0 ;
        for (int j = 0; j < n; ++j) {
            mp[ res [j][i] ] ++ ;
        }
        while (mp[cur]) cur++ ;
        mex[i]=cur ;
    }
    int cur=0 ;
    map<int,int>mp ;
    for(auto i : mex)mp[i]++ ;
    while (mp[cur])cur++ ;
    cout << cur << el ;
//    cout << el ;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << res[i][j] << ' ' ;
        }
        cout << el ;
    }

//    int n , m ; cin >> n >> m ;
//    if (n==1)
//    {
//        cout << 2 << el ;
//        lp(i,m) cout << i << ' ' ;
//        return;
//
//    }
//    else if (m==1)
//    {
//        cout << 0 << el ;
//        lp(i,n) cout << 0 << el ;
//        return;
//    }
//    int mn = min(n,m) ;
//    cout << min(n,m)  << el ;
//    vector<int>vc(m) ;
//    std::iota(vc.begin(), vc.end(),0) ;
//    vector<vector<int>> res(n,vc) ;
//    for (int i = 0; i < mn ; ++i) {
//        swap( res[i][i] , res[i].back()) ;
//    }
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            cout << res[i][j]<<' ';
//        }
//        cout << el ;
//    }
//
//
////5 1 2 3 4 0
////0 1 2 3 4 5
////0 1 2 3 4 5
////0 1 2 3 4 5
////0 1 2 3 4 5
////0 1 2 3 4 5



}

/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */