
// حل التعرفو و سيب المتعرفوش


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
    int n , m ;
    vector<int>v ;
    bool ok(int l)
    {
        int cur = 0 ;
        for (int i = 0; i < n ; ++i) {
            cur+=max(0ll , l-v[i] ) ;
        }
        return cur <=m ;
    }

void solllve()  {
    cin >> n >> m ;
    v=vector<int>(n) ;
    cin >> v ;
    int l = 0 , r = 1e10 ;
    while (r>l+1)
    {
        int mn = l+(r-l)/2 ;
        if (ok(mn)) { l = mn ;  }
        else r=mn ;
    }
    cout << l << el ;


    v.clear() ;



}

/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */