
// https://privnote.co/HDckmPlz#F0mCVEbf

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

// f6
    int n ;
    vector<int>a(2e5+5),dp(2e5+5) ;
    int solve(int i)
    {
        if (i>=n)
            return 0 ;
        int &ret = dp[i] ;
        if (~ret) return ret ;
      return  ret = solve(i+a[i])+a[i] ;
    }

void solllve()  {
    cin >> n ;
    for (int i = 0; i < n; ++i) {
        cin >> a[i] ; dp[i]=-1 ;
    }
    for (int i = 0; i < n; ++i) {
        solve(i) ;
    }
    cout << *max_element(dp.begin(),dp.begin()+n) << el ;



}

/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */