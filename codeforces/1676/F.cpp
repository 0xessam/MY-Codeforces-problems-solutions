// https://www.youtube.com/watch?v=zzyDvsnXGg4
/* لم يَكُنْ رسولُ اللَّهِ صلَّى اللَّهُ عليهِ وسلَّمَ يَدَعُ هؤلاءِ الكلمات
  حينَ يُمسي وحينَ يصبحُ اللَّهمَّ إنِّي أسألُكَ العفو والعافيةَ في الدُّنيا والآخرةِ
  اللَّهمَّ إنِّي أسألُكَ العفوَ والعافيةَ في ديني ودُنْيايَ وأَهْلي ومالي اللَّهمَّ استُر عَوْراتي وآمِن رَوعاتي
  اللَّهمَّ احفَظني من بينِ يديَّ ومن خَلفي وعن يميني وعن شِمالي ومِن فَوقي وأعوذ بعَظمتِكَ أن أُغتالَ مِن تَحتي*/

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









void solllve()
{
    int res = -1 , mx = -1 ;
    map<int,int>m ;
    int n , k ; cin >> n >> k ;
    vector<int>v(n);
    vector<int>now;
    for (int i=0 ; i<n ; i++)
        {
        cin >> v[i] ;
        m[v[i]]++ ;
        }
    for (int i=0 ; i<n ; i++)
        {
        if (m[v[i]]>=k) now.push_back(v[i]),m[v[i]]=0 ;
        }
    std::sort(now.begin(), now.end()) ;
    int cnt = 1 ;
    int i ;
    if (now.size()==0) cm(cout << -1 << el) ;
    now.push_back(now.back()+10) ;
        for ( i = 0 ; i<now.size()-1 ; i++) {
            if (now[i] + 1 == now[i + 1]) cnt++;
            else {
            //    show(mx);
             //   show(cnt);
                if (cnt > mx) mx = cnt, res = now[i];
                cnt = 1;
            }
        }
        cout << res-mx+1 << ' ' << res << el ;



}