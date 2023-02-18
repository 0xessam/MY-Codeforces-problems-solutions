// اللهم صل و سلم و بارك على سيدنا محمد
#include <bits/stdc++.h>
using namespace std ;
#define ll long long
#define ull unsigned long long
#define fixed(_) fixed << setprecision(_)
#define sz(x) int(x.size())
#define all(x) x.begin(), (x).end()
#define sortv(v) sort(all(v))
#define TxtIO   freopen("hobz.in","r",stdin);// freopen("output.txt","w",stdout);
#define el '\n'
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define FOR(i, n) for(int i = 0; i < (n); ++i)
#define oo LONG_LONG_MAX
#define io INT_MAX
const int mod=1e9+7;
const int N=2e5+5;
#define  read(x) cin >> x ;




void solllve() {

    int  n , m  ; cin >> n >> m ;
    char a[n][m] ;
    int f=0 ;
    FOR (i,n)
    {
        FOR (j,m) { cin >> a[i][j] ;
        f+=(a[i][j]=='1' and ((j==0 or j==m-1) or (i==0 or i==n-1) ) ) ;

        }
    }
    cout << (f?"2":"4") ;



    // hey there i love you <3
}







int main()
{
    // TxtIO
    cin.sync_with_stdio(0); cin.tie(0);
    int t = 1 ;
    // cin >> t ;
    while (t--)
    {
        solllve() ;
    }

    return 0;
}