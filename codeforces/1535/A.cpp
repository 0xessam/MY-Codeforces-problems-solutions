#include<bits/stdc++.h>
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
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define maxz(x, y) x = max(x, y)
#define minz(x, y) x = min(x, y)
#define FOR(i, n) for(int i = 0 ; i < (n); ++i)
#define oo LONG_LONG_MAX
//#define io INT_MAX
#define srt(x) sort(x.begin(),x.end())
#define rsrt(x) sort(x.rbegin(),x.rend())
const int mod=1e9+7;
const int N=2e5+5;
#define show(x)  cout << #x << " = " << x << '\n'
#define cvc(x) for (auto &i : x) cin >> i ;
#define cm return void
 
void solllve () ;
 
 
int main()
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
vector<ll> divs;
void Divisors(ll n)
{
    divs.clear();
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                divs.push_back(i);
            else
            {
                divs.push_back(i); divs.push_back(n / i);
            }
        }
    }
    sort(divs.begin(), divs.end());
}
 
void solllve()
{
     vector<int>v(4) ;
     cvc(v) ;
     int x = max(v[0],v[1]) ; 
     int y = max(v[2],v[3]) ;
     if (y>x) swap(x,y) ; 
     srt(v) ; 
     if (v[3]==x and v[2] == y) yes ; 
     else no ; }