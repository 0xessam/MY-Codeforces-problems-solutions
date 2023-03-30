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
 
 
void solllve()
{
     int n ; cin >> n ;
     vector<pair<int,int>>v(n) ;
     FOR (i,n)
     {
         cin >> v[i].ss ;
     }
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            if(__gcd(v[i].ss,2*v[j].ss)>1 and i-j ) v[i].ff++ ;
        }
    }
  //  for (auto i : v) cout << i.ss << ' ' ;
    rsrt(v) ;
 
    ll c{};
    for (int i=0 ; i<n ; ++i)
    {
        for (int j=i+1 ; j<n ; j++)
        {
         c+=(__gcd(v[i].ss,2*v[j].ss)>1) ;
        }
    }
    cout << c << el;}