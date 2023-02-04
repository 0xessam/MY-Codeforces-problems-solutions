// اللهم صل و سلم و بارك على سيدنا محمد
#include <bits/stdc++.h>
using namespace std ;
#define ll long long
#define ull unsigned long long
#define fixed(_) fixed << setprecision(_)
#define sz(x) int(x.size())
#define all(x) x.begin(), (x).end()
#define sortv(v) sort(all(v))
#define TxtIO   freopen("math.in","r",stdin); //freopen("output.txt","w",stdout);
#define el '\n'
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define FOR(i, n) for(int i = 0; i < (n); ++i)
#define oo LONG_LONG_MAX
const int mod=1e9+7;
const int N=1e5+5;



void solllve()
{
    ll n , m , k ;
    cin >> n >> m >> k ;
    ll a[N],pr[N]{} ;
    FOR (i,n) cin >> a[i] ;
    pair<pair<int,int>,ll>p[N] ;
    FOR (i,m)
    {
        cin >> p[i].first.first >> p[i].first.second >> p[i].second ;
    }
    ll op[N]{};
    FOR(i,k)
    {
        int l,r; cin >> l >> r ;
        op[l-1]++ ;
        op[r]-- ;
    }
    for (int i=1 ; i<m ; i++)op[i]+=op[i-1] ;
    //FOR (i,n+2) cout << op[i] << ' ' ;
    //cout << el ;
    FOR(i,m)
    {
        int l , r , d , cnt ;
        l=p[i].first.first ;
        r=p[i].first.second ;
        d=p[i].second ;
        cnt = op[i] ;

        pr[l-1]+=1ll*d*cnt ;
        pr[r]-=1ll*d*cnt ;

    }
    for (int i=1 ; i<n ; i++)
    {
        pr[i]+=pr[i-1] ;
    }
    FOR (i,n)cout << pr[i]+a[i] << ' ';


}
int main()
{
    //TxtIO
    cin.sync_with_stdio(0); cin.tie(0);
    int t = 1 ;
    // cin >> t ;
    while (t--)
    {
        solllve() ;
    }

    return 0;
}