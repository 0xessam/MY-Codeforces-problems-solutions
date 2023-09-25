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
/*
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 خد رايح فين طب صل على النبي طيب ☻☻
 **/

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

const int N = 2e5+5 ;
int a[N],dp[N],n ;

int solve(int i , int j)
{
//        cout << i << ' ' << j << el ;
    if (j<0) return -1 ;
    if (i>n) return 0 ;
    int &ret = dp[i] ;
    if (~ret)
        return ret ;
    ret = 0 ;
    int x=-1 , y = -1,z=-1 ;
    x=solve(i+1 ,j+1 )+a[i] ;
      y=solve(i+1 , j-1) ;
    z = solve(i+2,j+1) ;

    return ret = max({x, y,z}) ;

}

void solllve()  {
    cin >> n ;
    dp[0]=-1 ;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i] ;
        dp[i]=-1 ;
    }
    cout << solve(1 ,0 ) << el;



}


/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */