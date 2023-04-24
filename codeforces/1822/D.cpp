#include <bits/stdc++.h>
using namespace std ;
#define ll long long
#define ull unsigned long long
#define fixed(_) fixed << setprecision(_)
#define sz(x) int(x.size())
#define all(x) x.begin(), (x).end()
#define rall(x) x.rbegin(), (x).rend()
#define TxtIO  freopen("katryoshka.in","r",stdin);// freopen("output.txt","w",stdout);
#define el '\n'
#define ff first
#define ss second
#define yes cout << "YES" << el
#define yess cm (cout << "YES" << el)
#define no cout << "NO" << el
#define noo cm(cout << "NO" << el)
#define none cm (cout << "-1" << el)
#define maxz(x, y) x = max(x, y)
#define minz(x, y) x = min(x, y)
#define FOR(i, n) for(int i = 0 ; i < (n); ++i)
#define oo LONG_LONG_MAX
#define io INT_MAX
#define srt(x) sort(x.begin(),x.end())
#define rsrt(x) sort(x.rbegin(),x.rend())
const int mod=1e9+7;
const int N=2e5+5;
#define show(x)  cout << #x << " = " << x << '\n'
#define cvc(x) for (auto &i : x) cin >> i ;
#define cm return void
int psh() {int x; cin >> x;return x ;}
# define mod(a,b) ((a - 1) % b + b) % b;
#define vct(n) vector<int>v(n) ; \
 cvc(v) ;
// sort(a+1,a+n+1,[](long long x,long long y){return abs(x)>abs(y);});
void solllve () ;

int main()
{

    //  TxtIO
    cin.sync_with_stdio(0); cin.tie(0);
    int t = 1 ;
    cin >> t ;

    while (t--)
    {
        solllve() ;
    }
    return 0;
}


int n ;
bool ok(vector<int>v)
{
    for (int i=1 ; i<n ; i++)
        v[i]+=v[i-1] ;
    for (int i=0 ; i<v.size() ; i++)
        v[i]%=n ;
    map<int,int>m ;
    for (auto i : v) m[i]++ ;
  //  for (auto i : v) cout << i << ' ';
  //  cout << el ;
    for (int i=0 ; i<v.size() ; i++)
    {
        if (m[i]^1) return 0 ;
    }
    return  1 ;
}


void solllve()
{
    cin >> n ;

    if (n&1 and n!=1) none ;
    int r = n , l =1 ;
    for (int i=0 ; i<n ; i++)
    {
        if (i&1) {
            cout << l << ' ';
            l += 2;
        }
        else {
            cout << r << ' ';
            r -= 2;
        }
    }
    cout<< el ;

    // اااااااااااااااااااااااااااااااه 8:47 created
//    vector<int>v(n) ;
//    std::iota(v.begin(), v.end(),1) ;
//    vector<int>x=v ;
//    bool f = 0 ;
//    do {
//        std::next_permutation(v.begin(), v.end()) ;
//     //   for(auto i : v)cout << i << ' ' ;
//     //   cout << el ;
//        if(ok(v))
//        {
//            f=1 ;
//            for(auto i : v)cout << i << ' ' ;
//            cout << el ;
//        }
//
//    }while (v!=x) ;
//    if (!f) none;



}