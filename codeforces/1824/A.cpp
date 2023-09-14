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


void solllve()  {
    int n , m , l=0,r=0 ; cin >> n >> m ;
    vector<int>v ;
    for (int i = 0; i < n; ++i) {
        int x ; cin >> x;
        if (x==-2) r++ ;
        else if (~x) v.push_back(x) ;
        else l++ ;
    }
    UNIQUE(v) ;
    int mx = 0 ;
    int c1 = r+v.end()-std::upper_bound(v.begin(), v.end(),r) ;
    int c2 = l + v.size()- (v.end()- std::upper_bound(v.begin(), v.end(),l)) ;
    mx = max(mx ,c1 ) ;
    mx = max(mx ,c2 ) ;
    minz(mx,m);
    for (int i = 0; i < v.size(); ++i) {
        int id = v[i] ;
        int mxL = v.end() - std::upper_bound(v.begin(), v.end(),id) + r  ;
        int mxR =  (std::lower_bound(v.begin(), v.end(),id) - v.begin()  ) + l  ;
        minz(mxL , m-id) ;
        minz(mxR , id-1) ;
//        show(mxL) ;
//        show(mxR) ;
        maxz(mx , min(m ,mxL+mxR+1 ) ) ;
    }
    r+=v.size() ;
    l+=v.size() ;
    maxz(mx,min(r,m)) ;
    maxz(mx,min(l,m)) ;
    cout << mx << el ;




}

/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */