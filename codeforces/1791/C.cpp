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
    deque<char>dq ;
    dq.clear();
    int n ; cin >> n ;
    string s ; cin >> s;
    FOR (i,n) dq.push_back(s[i]) ;
    for (;dq.front()!=dq.back();)
    {
        if (dq.size()==2)
        {
            dq.clear() ; break ;
        }
        dq.pop_back();
        dq.pop_front();
    }
    cout << dq.size()<<el;

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