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

ll fun (vector<int>v , int x)
{
    vector<int>tmp=v ;
    int now =tmp[x] ;
    tmp[x]=0 ;
    int i ;
    i=x+1 ;
    for ( int q=0 ; q<14 ; i++)
    {
        tmp[i%(14)]+=((now)/14) ; q++ ;
    }
    now%=14 ;
    for ( ; now ; i++)
    {
        tmp[i%(14)]++ ;
        now-- ;
    }
    ll sm{};
    FOR (i,14)
    {
        if (tmp[i]%2 == 0) sm+=tmp[i] ;
    }
    return sm ;

}

void solllve()
{
    vector<int>v(14) ;
    FOR (i,14) cin >> v[i] ;
    ll bst{};
    for (int i=0 ; i<14 ; i++)
    {
        bst=max(bst, fun(v,i)) ;
    }
    cout << bst ;


}
int main()
{
    //TxtIO
    cin.sync_with_stdio(0); cin.tie(0);
    int t = 1 ;
    //cin >> t ;
    while (t--)
    {
        solllve() ;
    }

    return 0;
}