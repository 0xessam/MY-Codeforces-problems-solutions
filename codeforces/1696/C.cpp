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
//8 3
//3 9 6 3 12 12 36 12
//16
//9 3 2 2 2 3 4 12 4 12 4 12 4 12 4 4
int n , k ,m ;
pair<int,int>pr ;
void f ( int sm  )
{
    int x = 1 ;
    while (sm%k==0) sm/=k,x*=k ;
    pr = {sm,x};
//    cout << pr.first << ' ' << pr.second <<el ;
}


void solllve()  {
    cin >> n >> k ;
    vector<int>v(n) ;
    vector<pair<int,int>>a,b ;
    cin >> v ;
    cin >> m ;
    vector<int>c(m) ;
    cin >> c;
    for(auto i : v)
    {
        f(i) ;
        if (a.empty()) a.push_back(pr) ;
        else if (a.back().first == pr.first) a.back().second+=pr.second ;
        else a.push_back(pr) ;

    }
    for(auto i : c)
    {
        f(i) ;
        if (b.empty()) b.push_back(pr) ;
        else if (b.back().first == pr.first) b.back().second+=pr.second ;
        else b.push_back(pr) ;
    }
    a==b?yes:no ;


}

/* ÙÙ Ø£ÙÙÙ ØªØªÙÙÙÙÙ Ø¹ÙÙ Ø§ÙÙÙ Ø­Ù ØªÙÙÙÙ ÙØ±Ø²ÙÙÙ ÙÙØ§ ÙØ±Ø²Ù Ø§ÙØ·ÙØ± ØªØºØ¯Ù Ø®ÙØ§ØµØ§Ù ÙØªØ±ÙØ­ Ø¨Ø·Ø§ÙØ§Ù */