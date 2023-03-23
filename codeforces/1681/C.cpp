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
 
    void solllve () ;
 
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
 
  void solllve()
    {
        int n ; cin >> n ;
        vector<int>a(n) ;
        vector<int>b(n) ;
        cvc(a) ;
        cvc(b) ;
        vector<int>sa=a ;
        vector<int>sb=b ;
        srt(sa) ; srt(sb) ;
        vector<pair<int,int>>vp ;
        map<int,bool>mp ;
        for (int i=0 ; i<n ; i++)
        {
            bool f=0 ;
            for (int j=0 ; j<n ; j++)
            {
                if (a[j]==sa[i] and b[j]==sb[i] and !mp[j])
                {
                    f=1 ;
                    mp[j]=1 ;
                    break;
                }
            }
            if (!f) cm(cout << -1 << el) ;
        }
        for (int _=0 ; _<n ; _++)
        {
 
        for (int i=0 ; i<n-1 ; i++)
        {
            if (a[i]>=a[i+1] and b[i]>=b[i+1])
            {
                vp.push_back({i+1,i+1+1}) ;
                swap(a[i],a[i+1]) ;
                swap(b[i],b[i+1]) ;
            }
        }
 
        }
        cout << vp.size() << el ;
        for (auto i : vp) cout << i.ff << ' ' << i.ss << el ;
 
 
    }