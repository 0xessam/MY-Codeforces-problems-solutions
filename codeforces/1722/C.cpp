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
    map<string,int>mp ;
    vector<string>v1,v2,v3 ;
    int n ; cin >> n ;
    FOR (i,n)
    {
     string s ; cin >> s;
     mp[s]++ ;
     v1.push_back(s) ;
    }
    FOR (i,n)
    {
        string s ; cin >> s;
        mp[s]++ ;
        v2.push_back(s) ;
    }
    FOR (i,n)
    {
        string s ; cin >> s;
        mp[s]++ ;
        v3.push_back(s) ;
    }
    int s1{},s2{},s3{};
    FOR(i,n)
    {
        if (mp[v1[i]]==1) s1+=3 ;
        else if (mp[v1[i]]==2)s1+=1 ;
     }
    FOR(i,n)
    {
        if (mp[v2[i]]==1) s2+=3 ;
        else if (mp[v2[i]]==2)s2+=1 ;
    }
    FOR(i,n)
    {
        if (mp[v3[i]]==1) s3+=3 ;
        else if (mp[v3[i]]==2)s3+=1 ;
    }
    cout << s1 << ' ' << s2 << ' ' << s3 << el ;

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