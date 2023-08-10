#include<bits/stdc++.h>
using namespace std ;
#define int long long
#define ll long long
#define el '\n'
#define srt(a) sort(a.begin() , a.end())



signed main()
{
    int t = 1 ;
    cin.sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
   // cin >> t ;
    while (t--)
    {
        vector<int>fact ;
        int n , k ; cin >> n >> k ;
        for (int i = 2; i <= n ; ++i) {
            while (n%i==0) fact.push_back(i) , n/=i ;
        }
        if (n>1) fact.push_back(n) ;
        if (fact.size()<k) cout << -1 << el ;
        else
        {
            int idx = 0 ;
            for (int i = 0; i < k-1 ; ++i) {
                cout << fact[i] << ' ' ;
            }
            ll res=1 ;
            for (int i = k-1; i <fact.size() ; ++i) {
                res*=fact[i] ;
            }
            cout << res ;

        }


    }






    return 0 ;
}