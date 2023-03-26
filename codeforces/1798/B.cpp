    /* Only a fool learns from his own mistakes. The wise man learns from the mistakes of others.*/
    /*{ وَالَّذِينَ جَاهَدُوا فِينَا لَنَهْدِيَنَّهُمْ سُبُلَنَا ۚ وَإِنَّ اللَّهَ لَمَعَ الْمُحْسِنِينَ }*/

    #include <bits/stdc++.h>
    using namespace std ;
    #define ll long long
    #define ull unsigned long long
    #define fixed(_) fixed << setprecision(_)
    #define sz(x) int(x.size())
    #define all(x) x.begin(), (x).end()
    #define rall(x) x.rbegin(), (x).rend()
    #define TxtIO  freopen("hobz.in","r",stdin);// freopen("output.txt","w",stdout);
    #define el '\n'
    #define ff first
    #define ss second
    #define yes cout << "YES" << el
    #define no cout << "NO" << el
    #define maxz(x, y) x = max(x, y)
    #define minz(x, y) x = min(x, y)
    #define FOR(i, n) for(int i = 0 ; i < (n); ++i)
    #define oo LONG_LONG_MAX
    #define io INT_MAX
    #define srt(x) sort(x.begin(),x.end())
    #define rsrt(x) sort(x.rbegin(),x.rend())
    const int mod=1e9+7;
    const int N=2e5+5;
    #define show(x)  cout << #x << " = " << x << '\n'
    #define cvc(x) for (auto &i : x) cin >> i ;
    #define cm return void

    void solllve()
    {
        int n ; cin >> n ;
        set<int>st ;
        vector<vector<int>>v(n) ;
        FOR (i,n)
        {
            int s ; cin >> s ;
            FOR (j,s)
            {
                int x ;
                cin >> x ;
                v[i].push_back(x) ;
            }
        }
        vector<int>res;
        res.push_back(v.back().back()) ;
       // cout << v.back().back() << ' ';
        for (auto i : v.back()) st.insert(i) ;
        for (int i=n-2 ; i>=0 ; i--)
        {
            bool f=0 ;
            for (auto j : v[i] )
            {
                if (st.count(j)==0) {
                    res.push_back(j), f = 1;
                    break;
                }
            }
            for (auto k : v[i]) st.insert(k) ;
            if (!f) cm(cout << -1 << el ) ;
        }
        std::reverse(res.begin(), res.end()) ; 
        for (auto i : res) cout << i << ' ' ;
        cout << el ;

        //ااااااااااااااااااااااااااااااااااااااااااااااااااااااااااااااه
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



