/* Only a fool learns from his own mistakes. The wise man learns from the mistakes of others.*/
/*{ وَالَّذِينَ جَاهَدُوا فِينَا لَنَهْدِيَنَّهُمْ سُبُلَنَا ۚ وَإِنَّ اللَّهَ لَمَعَ الْمُحْسِنِينَ }*/

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
#define yes cout << "Yes" << el
#define no cout << "No" << el
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
    ll n,x,o{},e{} ; cin >> n >> x ;
    FOR (i,n)
    {
        int z ;cin >> z ;
        o+=(z&1) ;
        e+=(z&1^1) ;
    }
    if (!o or (x&1^1 and !e)) cm(no) ;
    if (o&1^1)o-- ;
    if (x>o+e)
    no ;
    else
     yes ;


    //ااااااااااااااااااااااااااااااااااااااااااااااااااااااااااااااه
}