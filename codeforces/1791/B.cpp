// اللهم صل و سلم و بارك على سيدنا محمد
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



void solllve()
{
    int n ; cin >> n ;
    string s ;
    cin >> s;
    pair<int,int>p ;
    FOR (i,n)
    {
        if (s[i]=='U') p.second++ ;
        else if (s[i]=='R')p.first++ ;
            else if (s[i]=='D')p.second-- ;
                else if (s[i]=='L')p.first-- ;
                if (p.first==1 and p.second==1)
                {
                    yes; return ;
                }
    }
    no ;


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