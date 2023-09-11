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
    string s ;cin >> s;
    int l = 0 , r = s.size()-1 ;
    string res(n+1,'0') ;
    int on = 0 ;
    while (l<r)
    {
//        cout << s[l] << ' ' << s[r] << el ;
        if (s[l]!=s[r]) on++ ;
        l++,r-- ;
    }
    int off = n/2 - on ;
    for (int i = on; i<=on+off*2 ; ) {
        res[i]='1' ;
        if (n&1) i++ ;
        else i+=2 ;
    }
    if(n&1)
    {
        for (int i = n; i >0 ; --i) {
            if (res[i-1]=='1') {
                res[i] = '1';
                break;
            }
        }
    }
    cout << res << el ;





}

/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */