// Generally, in life we may face problems that looks like
// so hard to deal with from the outside but once you tried to deal with them
// you would find that the most hard problem you should deal with is yourself ☻
/*
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * */
#include <bits/stdc++.h>
using namespace std ;
#define lp(i,n) for(int i = 0; i < (n); ++i)
template<typename T>istream& operator>>(istream&i,vector<T>&v){lp(j,v.size())i>>v[j];return i;}
#define tenll(x) ((ll)1e##x)
#define ll long long
#define el '\n'
#define int ll
#define ull unsigned long long
#define cm return void
#define yes cout << "Yes" << el
#define yess cm (cout << "Yes" << el)
#define no cout << "No" << el
#define noo cm(cout << "No" << el)
#define none cm (cout << "-1" << el)
#define maxz(x, y) x = max(x, y)
#define minz(x, y) x = min(x, y)
#define show(x)  cout << #x << " = " << x << '\n'
#define setDP(arr) memset(arr,-1,sizeof arr)
#define cout(v) for(auto i : v)cout << i << ' ' ; \
cout << el ;
void __(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#endif
 }


void solllve () ;
signed main()
{

     __() ;
     int t = 1 ;
     cin >> t ;
     while (t--)
     {
           solllve() ;
     }
       return 0;
}


void solllve()  {
    int n ; cin >> n ;
    set<int>uni ;
    vector<int>vre ;
    vector<vector<int>>vc(n) ;
    vector<vector<int>>adj(55) ;
    for (int i = 0; i < n; ++i) {
        int x ; cin >> x;
        for (int j = 0; j < x; ++j) {
            int y;  cin >> y ;
//            cout << y << el ;
            vc[i].push_back(y) ;
            uni.insert(y) ;
            vre.push_back(y) ;
            adj[y].push_back(i) ;
        }
    }
    int sz = uni.size() ;
    int res = 0 ;
    map<int,int>mp ;
    for (int i = 1; i <= 50; ++i) {
        if (adj[i].empty()) continue;
        int qw = sz ;

        for(auto z : vre) mp[z]++ ;
//        for(auto q : mp ) cout << q.first << ' ' << q.second << el ;
        for(auto u : adj[i])
        {
//            cout << "u : " << u << el ;
            for(auto q : vc[u])
            {
                mp[q]-- ;
//                if (i==5)
//                cout << q << ' ' << mp[q] <<el;
                if (mp[q]==0) qw-- ;
            }
        }
        if (qw<sz) maxz(res,qw) ;
        mp.clear() ;
//        cout << i << ' '  << res << ' ' << sz << el ;
//        for(auto q : mp ) cout << q.first << ' ' << q.second << el ;
    }
    cout << res << el ;



}



/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */