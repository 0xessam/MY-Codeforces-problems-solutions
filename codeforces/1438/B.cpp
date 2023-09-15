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

#define all(x) x.begin() , x.end()
#define UNIQUE(x) sort(all(x)), x.erase(unique(all(x)), x.end())


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
//    const int N = 2e5+7 ;
//    int dp[N] , b[N] , n , mx ;
//    int solve(int i , int prv , int df )
//    {
//        if (i==n) return 0 ;
//        int &ret = dp[i] ;
//        if (~ret) return ret ;
//        int x = 0 , y = 0 ;
//        if(~prv)
//        {
//            if (prv + df == b[i])
//                x=solve(i+1 , b[i] , 1 ) + b[i] ;
//
//            y=solve(i+1 , prv , df+1 ) ;
//        }
//        else
//        {
//             y = solve(i+1 , prv , df ) ;
//             x = solve(i+1 , b[i] , 1 ) + b[i] ;
//        }
//        return ret = max(x,y) ;
//
//    }

void solllve()  {
    int n ; cin >> n ; 
    vector<int>v(n) ; 
    cin >> v; 
    map<int,int>mp ;
    for (int i = 0; i < n; ++i) {
        mp[v[i]]++ ; 
        if (mp[v[i]] == 2 ) yess ;
    }
    no ;

}

/* ÃÂÃÂ ÃÂ£ÃÂÃÂÃÂ ÃÂªÃÂªÃÂÃÂÃÂÃÂÃÂ ÃÂ¹ÃÂÃÂ ÃÂ§ÃÂÃÂÃÂ ÃÂ­ÃÂ ÃÂªÃÂÃÂÃÂÃÂ ÃÂÃÂ±ÃÂ²ÃÂÃÂÃÂ ÃÂÃÂÃÂ§ ÃÂÃÂ±ÃÂ²ÃÂ ÃÂ§ÃÂÃÂ·ÃÂÃÂ± ÃÂªÃÂºÃÂ¯ÃÂ ÃÂ®ÃÂÃÂ§ÃÂµÃÂ§ÃÂ ÃÂÃÂªÃÂ±ÃÂÃÂ­ ÃÂ¨ÃÂ·ÃÂ§ÃÂÃÂ§ÃÂ */