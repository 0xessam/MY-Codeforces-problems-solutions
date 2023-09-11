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
   int n,a,b,val{} ,cur=1e16 ; cin >> n >> a >> b ;
   set<int>st ;
    for (int i = 0; i < n; ++i) {
        int x ; cin >> x;
        val+=(st.find(x)!=st.end())*a ;
            st.insert(x) ;
    }
    //6 2 8
    //7 3 5 4 4 8
    // 3 4 5 7 8
    // 2+
    int now=0 ;
    while (1)
    {

        int c1 = (*st.rbegin() - st.size()) ;
//        show(c1) ;
//        show(now*a);
        c1*=b ;
        minz(cur , c1 + now*a ) ;
        now++ ;
        st.erase(*st.rbegin()) ;
        if (st.empty()) {
        //    minz(cur, c1 + now * a);
            break;
        }
    }

//    show(cur) ;
    cout <<  min (val+cur , n*a+b) << el ;



}

/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */