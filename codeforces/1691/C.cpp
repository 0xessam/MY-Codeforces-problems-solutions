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

//    111001 --> 33
//    111001 --> 33
//    111100 --> 43
//    0111100 --> 44
//    1001001001
//    001010100
//    10010001
    int n , k ;
    cin >> n >> k ;
    string s ; cin >> s;
    int idx = s.find('1') ;
    int idx2 = s.rfind('1') ;
    if (std::count(s.begin(), s.end(),'1') == 0 ) cm(cout<<0<<el);
    int res = std::count(s.begin(), s.end(),'1')*11 ;

    idx2 = (n-1)-idx2 ;
    if(idx+idx2 <= k ) cout << max(1ll,res-11) << el ;
    else if ( idx2<=k ) cout << max(1ll,res-10) <<el ;
    else if ( idx<=k )
        cout << max(1ll,res-1) << el ;
    else cout << max(1ll,res) << el ;




}

/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */