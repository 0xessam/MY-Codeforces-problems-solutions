// اللهم صل و سلم و بارك على سيدنا محمد
#include <bits/stdc++.h>
using namespace std ;
#define ll long long
#define ull unsigned long long
#define fixed(_) fixed << setprecision(_)
#define sz(x) int(x.size())
#define all(x) x.begin(), (x).end()
#define sortv(v) sort(all(v))
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define el '\n'
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define FOR(i, n) for(int i = 0; i < (n); ++i)
#define oo LONG_LONG_MAX
#define io INT_MAX
const int mod=1e9+7;
const int N=2e5+5;
#define  read(x) cin >> x ;
int as{};
int n , m  ;
char a[1005][1005] ;
bool fun (int indx , int yndx)
{
    int cnt{};
    for (int i =indx ; i<n;  i++)
        cnt+=(a[i][yndx]=='*') ;
    for (int i =indx ; i>=0;  i--)
        cnt+=(a[i][yndx]=='*') ;
    for (int i = yndx ; i<m;  i++)
        cnt+=(a[indx][i]=='*') ;
    for (int i =yndx ; i>=0;  i--)
        cnt+=(a[indx][i]=='*') ;

    if (a[indx][yndx]=='*') cnt-=3 ;

    if (cnt==as) return true ;
    return false ;
}


void solllve()
{
  pair<int,string>p[3] ;
  p[0].second="chest" ;
  p[1].second="biceps" ;
  p[2].second="back" ;
  int n ; cin >> n;
  FOR (i,n)
  {
      int x ; cin >> x ;
      p[i%3].first+=x ;
  }
  sort(p,p+3) ;
  cout << p[2].second ;


    // hey there i love you <3
}







int main()
{
    // TxtIO
    cin.sync_with_stdio(0); cin.tie(0);
    int t = 1 ;
     //cin >> t ;
    while (t--)
    {
        solllve() ;
    }

    return 0;
}