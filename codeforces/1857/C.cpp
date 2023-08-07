/*
   ~~~~~~~~~~~~~~~~~
   !! Mesh 0xEssam !!
   ~~~~~~~~~~~~~~~~~~
*/


#include <bits/stdc++.h>
using namespace std ;
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define sz(x) int(x.size())
//template<typename T> using vc = vector<T>;
//template<typename T> using vv = vc<vc<T>>;
//template<typename T> using PQ = priority_queue<T,vc<T>,greater<T>>;
//using uint = unsigned; using ull = unsigned long long;
//using vi = vc<int>; using vvi = vv<int>; using vvvi = vv<vi>;
//using ll = long long; using vl = vc<ll>; using vvl = vv<ll>; using vvvl = vv<vl>;
//using P = pair<int,int>; using vp = vc<P>; using vvp = vv<P>;
template<typename T>istream& operator>>(istream&i,vector<T>&v){rep(j,sz(v))i>>v[j];return i;}
#define ll long long
#define int ll
#define ull unsigned long long
#define fixed(_) fixed << setprecision(_)
#define all(x) x.begin(), (x).end()
#define rall(x) x.rbegin(), (x).rend()
#define TxtIO  freopen("hobz.in","r",stdin);// freopen("output.txt","w",stdout);
#define el '\n'
#define ff first
#define ss second
#define yes cout << "Yes" << el
#define yess cm (cout << "Yes" << el)
#define no cout << "No" << el
#define noo cm(cout << "No" << el)
#define none cm (cout << "-1" << el)
#define maxz(x, y) x = max(x, y)
#define minz(x, y) x = min(x, y)
#define FOR(i, n) for(int i = 0 ; i < (n); ++i)
#define oo LONG_LONG_MAX
#define io INT_MAX
#define srt(x) sort(x.begin(),x.end())
#define UNIQUE(x) sort(all(x)), x.erase(unique(all(x)), x.end())
#define rsrt(x) sort(x.rbegin(),x.rend())
const int mod=1e9+7;
const int N=2e5+5;
#define show(x)  cout << #x << " = " << x << '\n'
#define cout(v) for(auto i : v)cout << i << ' ' ; \
cout << el ;
#define cvc(x) for (auto &i : x) cin >> i ;
#define cm return void
# define mod(a,b) ((a - 1) % b + b) % b;
#define vct(n) vector<int>v(n) ; \
 cvc(v) ;
const int dc[8] = {0, 0, 1, -1, 1, 1, -1, -1};
const int dr[8] = {1, -1, 0, 0, 1, -1, 1, -1};
// sort(a+1,a+n+1,[](long long x,long long y){return abs(x)>abs(y);});
void solllve () ;
signed main()
{

    // TxtIO
    cin.sync_with_stdio(0); cin.tie(0);
    int t = 1 ;
    cin >> t ;
    while (t--)
    {
        solllve() ;
    }
    return 0;
}


void solllve()
{
    int n ; cin >> n ;
    vector<int>v(n*(n-1)/2);
    cin >> v ;
    rsrt(v) ;
    int pos = 1 ;
    for (int i = 0; i < v.size() ; i+=pos) {

        cout << v[i]<< ' ' ;
        pos ++ ;
    }
    cout << 1000000000  ;
    cout << el ;



}