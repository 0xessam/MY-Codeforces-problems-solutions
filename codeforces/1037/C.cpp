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
int dp[1000007],n ;
vector<pair<int,int>>idxx ;
vector<int>idx ;
    int solve(int i)
    {
        if(i==idx.size()-1) return 1 ;
        if (i>=idx.size()) return 0 ;
        int &ret = dp[i] ;
        if (~ret)
             return ret ;
        ret = 1e9 ;
        int x = 1e9 , y = 1e9 ;
        if (i+1 < n and idx[i]==idx[i+1]-1)
        {
         x = solve(i+2) + 1 ;
        }
        y = solve(i+1)+1 ;
        return ret = min({ret, x, y}) ;
    }

void solllve()  {
        cin >> n ;
        string a , b ; cin >> a >> b ;
    for (int i = 0; i < n; ++i) {
        if (a[i]!=b[i]) idxx.push_back({i,a[i]}) ;
        dp[i]=dp[i+1]=-1 ;
    }


    for (int i = 0; i < ::int_fast32_t (idxx.size()) - 1   ; ++i) {
        if (idxx[i].first+1 == idxx[i+1].first and idxx[i].second!=idxx[i+1].second)
        {
            idx.push_back(idxx[i].first) ;
            idx.push_back(idxx[i+1].first) ;
            i++ ;
        }
    }
    cout << solve(0)+idxx.size()-idx.size() ;
}

/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */