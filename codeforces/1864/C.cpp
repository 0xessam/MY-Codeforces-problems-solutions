#include <bits/stdc++.h>
using namespace std ;
#define lp(i,n) for(int i = 0; i < (n); ++i)
template<typename T>istream& operator>>(istream&i,vector<T>&v){lp(j,v.size())i>>v[j];return i;}
#define tenll(x) ((ll)1e##x)
#define ll long long
#define el '\n'
//#define int ll
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
#define all(x) x.begin() , x.end()
#define UNIQUE(x) sort(all(x)), x.erase(unique(all(x)), x.end())
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
//const int N = 1e5+7 , OO=-1e9 ;
//int dp[N][6] , n , a[N] ;
//int solve(int i , int cur)
//{
//    if (i==n-1) return a[i] ;
//    if (cur==0) return a[i] ;
//    int &ret = dp[i][cur] ;
//    if (~ret) return ret ;
//    ret = 1 ;
//    ret = max(ret*solve(i+1 , cur-1) , solve(i+1 , cur)) ;
//    return ret ;
//}

void solllve()  {
//    setDP(dp) ;
//    cin >> n ;
//    lp(i,n) cin >> a[i] ;
//    cout << solve(0,5) << el;
//
//    lp(i,n) lp(j,5) cout << dp[i][j] << ' ' ;
    int n ; cin >> n ;
    vector<int>res ;
    res.push_back(n) ;
    if (n&1) res.push_back(n-1),n-- ;
  //  show( ( 1 << ( __builtin_ctz(n)) ) ) ;
    while ( n>1 )
    {
        if ( __builtin_popcount(n)==1 )
        {
            n-=(( 1 << ( __builtin_ffs(n)-2) )) ;
            res.push_back(n) ;
            continue;
        }
            n-=(( 1 << ( __builtin_ffs(n-(n&1)) - 1 ) )) ;
            res.push_back(n) ;

    }
    cout << res.size() << el ;
    cout(res);



}

/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */