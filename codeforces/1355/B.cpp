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
    vector<int>v(n) ; cin >> v;
    std::sort(v.begin(), v.end()) ;
    int mn = 1e6 , mx = -1e6 , cur{} , k{};
    for (int i = 0; i < n; ++i) {
        if (cur>=mn and cur>=mx)
        {
            k++;
            mn = 1e6 , mx = -1e6 , cur=0 ;
        }
        maxz(mx , v[i]) ;
        minz(mn , v[i]) ;
        cur++ ;
    }
   // cout << cur << ' ' << mn << ' ' << mx << el;
    if (cur>=mn and cur>=mx)
    {
        k++;
    }
    cout << k << el ;





}

/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */