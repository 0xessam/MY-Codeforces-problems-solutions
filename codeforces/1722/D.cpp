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
   int  fun (int n)
   {
       int sum=0 ;
       while (n)
       {
           sum+=n%10 ;
           n/=10 ;
       }
       return sum ;
   }
vector<ll>bnf ;
void solllve() {
        bnf.clear() ;
       int n ; cin >> n ;
       string arr ; cin >> arr ;
       if (n==1)
       {
           cout << 0 << el ;
           return;
       }
       ll cst{0};
       for (int i=0 ; i<n ; i++)
       {
           if (arr[i]=='L')
           {
               cst+=i ;
               if ((n-1-2*i)>0) bnf.push_back( (n-1-2*i) ) ;
           }
           else
           {
                   cst+=(n-1-i) ;
               if ( (i-(n-1-i) ) >0) bnf.push_back(i-(n-1-i)) ;
           }
 
       }
      //  cout << bnf.size() << el ;
      // sort(bnf.rbegin(),bnf.rend());
      // while (bnf.size()>n) bnf.pop_back() ;
       sort(bnf.rbegin(),bnf.rend());
       for (int i=1 ; i<bnf.size() ; i++) bnf[i]+=bnf[i-1] ;
 
      // for (auto i:bnf) cout << i << ' ' ;
        if (bnf.size()==0)
        {
            FOR (i,n) cout << cst << ' ' ;
            cout << el ;
            return ;
        }
        {
           for (int i = 0; i < n; i++) {
               if (i < bnf.size()) cout << cst + bnf[i];
               else cout << cst + bnf.back();
               cout << ' ';
           }
       }
        cout << el ;;
}
 
 
 
int main()
{
    //TxtIO
    cin.sync_with_stdio(0); cin.tie(0);
    int t = 1 ;
     cin >> t ;
    while (t--)
    {
        solllve() ;
    }
 
    return 0;
}