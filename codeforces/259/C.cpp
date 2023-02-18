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
 string s ; cin >> s ;
 int cn=0 ;
    for (char i  : s)
    {
        cn+=(i==48) ;
    }
 bool f=(cn>0) ;
    if (!f) s.pop_back() ;
 for (char i  : s)
 {
     if (i-48==0 and f) f=0 ;
     else cout << i ;
 }


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