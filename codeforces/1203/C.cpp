#include <bits/stdc++.h>
using namespace std;
typedef long long ll ; typedef vector<int> vi ; typedef pair<int,int> ii ;
const ll oo = LONG_LONG_MAX ; const int io =  INT_MAX ; const int N = 2e5+7 ;
#define ff first
#define ss second
#define el '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define _906 cin.sync_with_stdio(0); cin.tie(0);
#define none cm (cout << "-1" << el)
#define maxz(x, y) x = max(x, y)
#define minz(x, y) x = min(x, y)
#define FOR(i, n) for(int i = 0 ; i < (n); ++i)
#define all(x) x.begin(), (x).end()
#define cm return void
#define cvc(x) for (auto &i : x) cin >> i ;
#define show(x)  cout << #x << " = " << x << '\n'
void BURN_OUT () ;

signed int main()
{ _906 int t = 1 ; /*cin >> t*/ ; while (t--) {BURN_OUT() ;} return 0 ; }
int n ;
int res ;
void divs(ll x)
{
    for (ll i=1 ; i*i<=x ; i++)
    {
        if (x%i==0)
        {
           res+=(x%i)==0 ;
           res+=((x/i)!=i) ;
        }
    }
}


void BURN_OUT()
{
     cin >> n ;
     ll gc = 0 ;
    FOR(i,n)
    {
        ll x ;cin >> x ;
        gc=__gcd(gc,x);
    }
    divs(gc) ;
    cout << res<< el ;



}