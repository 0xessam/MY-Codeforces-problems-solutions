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
//     cin >> t ;
     while (t--)
     {
           solllve() ;
     }
       return 0;
}


void solllve()  {
    int a , b ; cin >> a >> b;
    if ( b>a or (a>b and b==1) ) none;
    int x = b-2 ;
    x=max(x,0ll) ;
    for (int i = 0; i < a-x; ++i) {
        if (i&1^1) cout << 'a' ;
        else cout << 'b' ;
    }
    for (int i = 0; i < x; ++i) {
        cout << char('c'+i) ;
    }





}

/* ÙÙ Ø£ÙÙÙ ØªØªÙÙÙÙÙ Ø¹ÙÙ Ø§ÙÙÙ Ø­Ù ØªÙÙÙÙ ÙØ±Ø²ÙÙÙ ÙÙØ§ ÙØ±Ø²Ù Ø§ÙØ·ÙØ± ØªØºØ¯Ù Ø®ÙØ§ØµØ§Ù ÙØªØ±ÙØ­ Ø¨Ø·Ø§ÙØ§Ù */