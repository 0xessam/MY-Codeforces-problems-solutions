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
    int n , x , m ;
    int k = 1 ;
    cin >> n >> x >> m ;
    vector<pair<int,int>>vc ;
    for (int i = 0; i < m; ++i) {
        int l , r ;
        cin >> l >> r ;

        if ( ( x>=l and x<=r ) or !vc.empty() )
        {
            vc.push_back({l,r}) ;
        }
    }

    for (int i = 1; i < vc.size(); ++i) {
        if (  vc[i].first <= vc[0].second and vc[i].second >= vc[0].first  )
        {
            minz(vc[0].first , vc[i].first) ;
            maxz(vc[0].second , vc[i].second) ;
        }

    }
//    for(auto[a,b] : vc) cout << a << ' ' << b << el ;

    if (vc.empty()) cout << 1 << el ;
    else
    cout << vc[0].second - vc[0].first +1 << el ;

}

/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */