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
     cin >> t ;
     while (t--)
     {
           solllve() ;
     }
       return 0;
}




void solllve()  {
    int n ,x  ; cin >> n >> x;
    vector<int>v(n+1) ;
    for (int i = 1; i <= n; ++i) {
        cin >> v[i] ;
        v[i]+=v[i-1] ;
    }
    if (v.back()<x) none ;
    int l = x , r = n ;
    int ans = -1 ;
    while (l<=r)
    {
        int m = (l+r) >> 1 ;
        bool ok = 0 ;
        int p = m ;
        while (p<=n)
        {
            if (v[p] - v[p-m] <= x) ok=1 ;
            p++ ;
        }
//        show(m) ;
//        show(ok) ;
        if (ok) l=m+1 ;
        else r=m-1 ;
    }
    cout << n-r << el ;


}



/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */