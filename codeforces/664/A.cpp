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
    map<int , int>mp ;
int x = 0 ;
    void f(int n)
    {
    if (mp[n]) return;
//        show(n) ;
  if(n%10)  mp[n]=1 ;
        int sm = 0 ;
        int tmp=n ;
        while (tmp) sm+=tmp%10 , tmp/=10 ;
        f(sm) ;
        for (int i = n ;  ; ++i) {
            if ( i and i%10==0 )
            {
//                x++ ;
                f(i/10) ;
                break;
            }
            else
            f(i) ;
        }

    }


void solllve()  {
   string a , b ;
   cin >> a >> b;
    if (a==b) cout << a ; 
    else cout << 1 ; 

}

/* ÙÙ Ø£ÙÙÙ ØªØªÙÙÙÙÙ Ø¹ÙÙ Ø§ÙÙÙ Ø­Ù ØªÙÙÙÙ ÙØ±Ø²ÙÙÙ ÙÙØ§ ÙØ±Ø²Ù Ø§ÙØ·ÙØ± ØªØºØ¯Ù Ø®ÙØ§ØµØ§Ù ÙØªØ±ÙØ­ Ø¨Ø·Ø§ÙØ§Ù */