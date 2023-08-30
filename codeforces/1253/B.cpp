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
    // cin >> t ;
     while (t--)
     {
           solllve() ;
     }
       return 0;
}


void solllve()  {
    int n ; cin >> n ;
    vector<int> res ;
    map<int,int>mp ;
    int cur = 0 ,x ;
    for (int i = 0; i < n; ++i) {
      //  show(cur) ;
        cin >> x ;
        if ( x > 0 and mp[x]==0 ) cur++ , mp[x]=1 ;
        else if ( x < 0 and mp[-x]==1 ) cur-- , mp[-x]=-1 ;
        else none ;
        if (cur == 0) res.push_back(i+1) , mp.clear() ;
    }
    if(cur)none ;
    cout << res.size() << el ;
    for (int i = res.size()-1; i > 0; --i) {
        res[i]-=res[i-1] ;
    }
    cout(res) ;


}

/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */