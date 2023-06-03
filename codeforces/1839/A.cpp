// https://www.youtube.com/watch?v=zzyDvsnXGg4
/* لم يَكُنْ رسولُ اللَّهِ صلَّى اللَّهُ عليهِ وسلَّمَ يَدَعُ هؤلاءِ الكلمات
  حينَ يُمسي وحينَ يصبحُ اللَّهمَّ إنِّي أسألُكَ العفو والعافيةَ في الدُّنيا والآخرةِ
  اللَّهمَّ إنِّي أسألُكَ العفوَ والعافيةَ في ديني ودُنْيايَ وأَهْلي ومالي اللَّهمَّ استُر عَوْراتي وآمِن رَوعاتي
  اللَّهمَّ احفَظني من بينِ يديَّ ومن خَلفي وعن يميني وعن شِمالي ومِن فَوقي وأعوذ بعَظمتِكَ أن أُغتالَ مِن تَحتي
  */
// There is no need for sadness and despair
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
# define mod(a,b) ((a - 1) % b + b) % b;
#define vct(n) vector<int>v(n) ; \
 cvc(v) ;
const int dc[8] = {0, 0, 1, -1, 1, 1, -1, -1};
const int dr[8] = {1, -1, 0, 0, 1, -1, 1, -1};
#define  cout(v)  for(auto i : v) cout << i << ' ' ;

// sort(a+1,a+n+1,[](long long x,long long y){return abs(x)>abs(y);});
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
//    int n ; cin >> n ;
//    vector<vector<int>>v(n+5) ;
//    for (int i = 0; i < n ; ++i) {
//        int a,b; cin >> a >> b ;
//        v[a].push_back(b) ;
//    }
//    ll sm = 0 , cn=0 ;
//    for (int i = 0; i < n+1 ; ++i) {
//        std::sort(v[i].rbegin(), v[i].rend()) ;
//    }
//    bool f = 1 ;
//    map<int,int>mp ;
//    for (int i=n+1 ; i>=0 ; i--)
//    {
//        for (int j=0 ; j<v[i].size() ; j++)
//        {
//            cout << v[i][j] << ' ' ;
//            if (cn>i or f)
//            {
//                sm+=v[i][j] ;
//                mp[i]++ ;
//                cn++ ;
//                if (cn==i)
//                {
//                    cn-=mp[cn] ;
//
//                }
//                cn-=mp[cn] ;
//                f&=0 ;
//            }
//        }
//        cout << el ;
//
//
//    }
//    cout << sm << el ;

    int n , k , res=1e9 ; cin >> n >> k ;
    for(int i=1 ; i<=n ; i++)
    {
        res = min (res, + (n - i + k - 1) / k + (i + k - 2) / k ) ;
    }
    cout << res +0000000000000000000000001 << el ;




}
