/* Only a fool learns from his own mistakes. The wise man learns from the mistakes of others.*/
/*{ وَالَّذِينَ جَاهَدُوا فِينَا لَنَهْدِيَنَّهُمْ سُبُلَنَا ۚ وَإِنَّ اللَّهَ لَمَعَ الْمُحْسِنِينَ }*/

#include <bits/stdc++.h>
using namespace std ;
#define ll long long
#define ull unsigned long long
#define fixed(_) fixed << setprecision(_)
#define sz(x) int(x.size())
#define all(x) x.begin(), (x).end()
#define rall(x) x.rbegin(), (x).rend()
#define TxtIO  freopen("hobz.in","r",stdin);// freopen("output.txt","w",stdout);
#define el '\n'
#define ff first
#define ss second
#define yes cout << "Yes" << el
#define no cout << "No" << el
#define noo cm (cout << "0" << el)
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
#define vct(n) vector<ll>v(n) ; \
 cvc(v) ;
void solllve () ;


int main()
{

    // TxtIO
    cin.sync_with_stdio(0); cin.tie(0);
    int t = 1 ;
    //  cin >> t ;
    while (t--)
    {
        solllve() ;
    }
    return 0;
}

vector<int> v ;
int n , k;
bool ok(int m)
{
    int cnt = 0 ;
    for (int i=0 ; i<m ; ++i)
        cnt+=(v[i]^1);
    int l=0,r=m ;
  //  show(m ) ;
    if (cnt<=k) return 1 ;

    while (r<n)
    {
        cnt-=(v[l]^1) ;
        cnt+=(v[r]^1) ;
        if (cnt<=k) return 1 ;
        l++,r++ ;
    }
    if (cnt<=k) return 1 ;
    return 0 ;
}
void solve(int m)
{
    int cnt = 0 ;
    for (int i=0 ; i<m ; ++i)
        cnt+=(v[i]^1);
    int l=0,r=m ;
    while (r<=n)
    {
        if (cnt<=k)
        {
            for (int i=l ; i<r ; ++i) v[i]=1 ;
            return;
        }
        cnt-=(v[l]^1) ;
        cnt+=(v[r]^1) ;
        l++,r++ ;
    }

}

void solllve()
{
    cin >> n >> k;
    v=vector<int>(n) ;
    for (int i=0 ; i<n ; ++i) cin >> v[i] ;
    int l=-1,r=n+1 ;
    while (r>l+1)
    {
        int m = l + (r-l)/2 ;
        ok(m)?l=m:r=m ;
    }
    cout << l <<el ;
    solve(l) ;
    for (auto i : v) cout << i << ' ' ;
}