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
    int n , k , a ,b ;
    cin >> n >> k >> a >> b ;
    vector<int>x(n) ;
    vector<int>y(n) ;
    vector<int>dp(n+1 , 1e12) ;
    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i] ;
    }
    b-- , a-- ;
    dp[a] = 0 ;
    int mn = 1e16 ;
    for (int i = 0; i < k; ++i) {
       // if (i==a) continue;
        dp[i] = min( dp[i] , abs(x[i]-x[a]) + abs(y[i]-y[a]) );
        minz(mn,dp[i]) ;
    }
    for (int i = 0; i < k; ++i) {
        dp[i] = mn;
    }
    for (int i = 0; i < k; ++i) {
        dp[b]=min(dp[b] , abs(x[i]-x[b]) + abs (y[i]-y[b]) + dp[i] ) ;
    }
    dp[b]=min(dp[b] , abs(x[a]-x[b]) + abs (y[a]-y[b])  ) ;
    cout << dp[b] << el ;





}

/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */