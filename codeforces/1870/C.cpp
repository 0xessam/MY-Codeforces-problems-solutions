
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

struct cl {
    int a=1e6 , b=-1e6 , c=1e6 , d=-1e6 ;
};
void solllve()  {
//    int n , k ; cin >> n >> k ;
//    vector<int>v(n) ; cin >> v ;
//    cl cls [k+10] ;
//    for (int i = 0; i < n; ++i) {
//
//        for (int j = 0; j < n; ++j) {
//            cls[min(v[i] , v[j])].a = min(i,cls[min(v[i] , v[j])].a) ;
//            cls[min(v[i] , v[j])].b = max(i,cls[min(v[i] , v[j])].b) ;
//            cls[min(v[i] , v[j])].c = min(j,cls[min(v[i] , v[j])].c) ;
//            cls[min(v[i] , v[j])].d = max(j,cls[min(v[i] , v[j])].d);
////            cout << min(v[i] , v[j]) << ' ' ;
//        }
////        cout << el ;
//
//    }
//    for (int i = 1; i <= k; ++i) {
//        auto [a,b,c,d] = cls[i];
////        cout << a << ' ' << b << ' '<< c << ' ' << d << el ;
//            if (a==1e6) cout << 0 << ' ' ;
//            else
//           cout << (abs(a-b-1)) + (abs(c-d-1)) << ' ' ;
//    }
//    cout << el ;
//auto x = v ;
//    for (int i = n-2; ~i ; --i) {
//
//    }
    int n , k ; cin >> n >> k ;
    vector<pair<int,int>>c(k+10 , {1e6 , -1000}) ;
    vector<int>v(n) ;
    cin >> v ;
    map<int,int>l ;
    map<int,int>r ;
    map<int,bool>find,findd ;
    for (int i = 0; i < n; ++i) {
        r[v[i]] = i ;
        find[v[i]]|=1 ;
        findd[v[i]]|=1 ;
    }
    for (int i = n-1; i>=0 ; --i) {
        l[v[i]] = i ;
    }
    auto it = *std::max_element(v.begin(), v.end()) ;
    c[it].first = l[it] ;
    c[it].second = r[it] ;
    for (int i = it-1; i > 0 ; --i) {
        if ( ! findd[i]) {
            c[i].first = c[i + 1].first, c[i].second = c[i + 1].second;
            continue;
        }
        c[i].first = min(l[i] , c[i+1].first  ) ;
        c[i].second = max(r[i] , c[i+1].second  ) ;
    }
    for (int i = 1; i <= k; ++i) {
       // cout << i << ':' << c[i].first << ' ' << c[i].second << el ;
        if (!find[i]) cout << 0 << ' ' ;
        else cout << 2ll*(c[i].second - c[i].first + 1ll) << ' ' ;
    }
    cout << el ;


}

/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */