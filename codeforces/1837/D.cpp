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
    // ()() )))()(((
    //
    // (())))((
    // 11112222
    int n ;
    cin >> n ;
    string s; cin >> s ;
    map<int,int>mp ;
    int k = 1 ;
    int l=0,r=0,lf=0,rf=0 ;
    for (int i = 0; i < n ; ++i) {
        if( s[i]=='(' )
        {
            if ( rf>lf ) mp[i]=2 , k=2 , lf++ ;
            else l++,mp[i]=1 ;
        }
        else
        {
            if ( l>r ) mp[i]=1 , r++ ;
            else rf++,mp[i]=2 ;
        }
    }
    if ((std::count(s.begin(), s.end(),'(') != n/2 ) or n&1) none ;
    set<int>st ;
    for(auto i : mp )st.insert(i.second) ;
    cout << st.size() << el ;
    if (st.size()==1) for(auto &i : mp) i.second=1 ;
//    cout << k << el ;
    for (int i = 0; i < n; ++i) {
        cout << mp[i] << ' ';
    }
    cout << el ;

}

/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */