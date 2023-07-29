/*
  لم يَكُنْ رسولُ اللَّهِ صلَّى اللَّهُ عليهِ وسلَّمَ يَدَعُ هؤلاءِ الكلمات
  حينَ يُمسي وحينَ يصبحُ اللَّهمَّ إنِّي أسألُكَ العفو والعافيةَ في الدُّنيا والآخرةِ
  اللَّهمَّ إنِّي أسألُكَ العفوَ والعافيةَ في ديني ودُنْيايَ وأَهْلي ومالي اللَّهمَّ استُر عَوْراتي وآمِن رَوعاتي
  اللَّهمَّ احفَظني من بينِ يديَّ ومن خَلفي وعن يميني وعن شِمالي ومِن فَوقي وأعوذ بعَظمتِكَ أن أُغتالَ مِن تَحتي

*/

#include <bits/stdc++.h>
using namespace std ;
#define ll long long
#define int ll
#define ull unsigned long long
#define fixed(_) fixed << setprecision(_)
#define sz(x) int(x.size())
#define all(x) x.begin(), (x).end()
#define rall(x) x.rbegin(), (x).rend()
#define TxtIO  freopen("hobz.in","r",stdin);// freopen("output.txt","w",stdout);
#define el '\n'
#define ff first
#define ss second
#define yes cout << "Yes" << el
#define yess cm (cout << "YES" << el)
#define no cout << "No" << el
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
#define cout(v) for(auto i : v)cout << i << ' ' ; \
cout << el ;
#define cvc(x) for (auto &i : x) cin >> i ;
#define cm return void
# define mod(a,b) ((a - 1) % b + b) % b;
#define vct(n) vector<int>v(n) ; \
 cvc(v) ;
const int dc[8] = {0, 0, 1, -1, 1, 1, -1, -1};
const int dr[8] = {1, -1, 0, 0, 1, -1, 1, -1};
// sort(a+1,a+n+1,[](long long x,long long y){return abs(x)>abs(y);});
void solllve () ;
signed main()
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
    int n , k ; cin >> n >> k ;
    string s ; cin >> s ;
    vector<int>idx ;
    for(int i = 0 ; i<n ; i++)
    {
        if (s[i]=='0') idx.push_back(i) ;
    }
    int i = 0 ;
    for( ; i<idx.size() ; i++)
    {
        int mn =min(idx[i],k) ;
        if(idx[i]-mn<i)
        {
            mn-= (i-(idx[i]-mn)) ;
        }
        k-=mn ;
        idx[i]-=mn ;
    }
   // cout(idx) ;
    i=0 ;
    for(int j=0 ; j<n ; j++)
    {
        if( i < idx.size() and j==idx[i]) cout << 0,i++ ;
        else cout << 1 ;
    }
    cout << el ;












}