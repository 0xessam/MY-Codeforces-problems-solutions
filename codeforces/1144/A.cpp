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
#define srt(x) sort(x.begin(),x.end())
#define srrt(x) sort(x.rbegin(),x.rend())
const int mod=1e9+7;
const int N=2e5+5;
#define show(x)  cout << #x << " = " << x << '\n'
#define cvc(x) for (auto &i : x) cin >> i ;
 
 
 
void solllve ()
{
 
    string s; cin >> s;
    srt(s) ;
    set<int>st ;
    for (int i=1 ; i<s.size() ; i++)
    {
        if (s[i]-s[i-1]!=1)
        {
            no ;
            return;
        }
    }
    yes;
    
 
 
 
}
 
 
 
 
 
bool tc = true ;
 
 
 
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