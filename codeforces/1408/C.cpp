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
    vector<double>v ;
    double n , a ;
    int lp=100 ; cin >> n >> a;
    FOR(i,n)
    {
        double x ;cin >> x;
        v.push_back(x) ;
    }
    double l=0,r=a+1,m ;

    while (lp--)
    {
        m =  (r + l) / 2.0;
        double ff = 0 , ss = a ;
        double ve = 1 ;
        int idx = 0 ;
        double mm = m ;
        while (mm>0 and idx<n)
        {
            if (ff+mm*ve > v[idx])
            {
                mm-=abs(v[idx]-ff)/ve ;
                ff = v[idx] ;
                idx++ ;
                ve++ ;
            }
            else
            ff+=mm*ve , mm=0 ;
        }
       if(mm>0) ff+=mm*ve ;
        mm=m ;
        idx = n-1 ;
        ve=1 ;
        while (mm>0 and idx>=0)
        {
            if (ss-(mm*ve) < v[idx])
            {
                mm-=abs(v[idx]-ss)/ve ;
                ss = v[idx] ;
                idx-- ;
                ve++ ;
            }
            else
                ss-=mm*ve , mm=0 ;
        }
       if(mm>0) ss-=mm*ve ;
        if (ff < ss) l = m;
        else r = m;

    }
    cout << fixed << setprecision(10) << l << el ;
    v.clear() ;
}
