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

    int n ; cin >> n ;
    pair <char,pair<int,int>>p[n];
    char c ;
    for (int i=0 ; i<n;  i++)
    {
        cin >> p[i].first ;
        cin>>p[i].second.first >> p[i].second.second;
    }
    int cnt=0,best{},f{},m{};

    for (int i=1 ; i<450 ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            if (p[j].second.first<= i and p[j].second.second >= i and p[j].first=='M') cnt++ , m++ ;
            if (p[j].second.first<= i and p[j].second.second >= i and p[j].first=='F') cnt++ , f++ ;
        }
        cnt = min(f,m)*2 ;
        f=0 ; m=0 ;
        best=max(best,cnt) ;
        cnt=0 ;
    }
    cout << best ;

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