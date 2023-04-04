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
#define vct(n) vector<int>v(n) ; \
 cvc(v) ;
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
    int  n ; cin >>  n ;
    vector<int>v(n-1) ;
    vector<int>res(n,0) ;
    cvc(v) ;
    res[0]=v[0] ;
    res.back() = v.back() ;
    for (int i=1 ; i<n-1 ; i++)
    {
        if (v[i]>=v[i-1]) res[i] = v[i-1] ;
    }
    for (int i=0 ; i<n-1 ; i++)
    {
        if (max(res[i],res[i+1]) != v[i]) res[i] = v[i] ;
    }
    for (auto i : res) cout<<i << ' ' ;
    cout << el;



}









