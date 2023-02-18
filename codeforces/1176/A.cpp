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



ll n ;
void solllve() {
   cin >> n ;
   int c {};
   while (n>1)
   {
       if (n%2==0) n/=2 ;
       else if (n%3==0) n/=3 , n*=2 ;
       else if (n%5==0) n/=5 ,n*=4  ;
       else {
           cout << -1 << el ;
           return;
       }
       c++ ;
   }
   cout << c << el  ;


    // hey there i love you <3
}







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