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
    int n , k , a ,b ; cin >> n >> k >> a >> b ;
    vector<string>v(2*n+10 , string(2*n+10 , '.')) ;
    for (int i = 0 ; i < 2*n+10 ; ++i) {
        v[i][i] = 'X' ;
        for (int j = i; j < 2*n+10; j+=k) {
            v[i][j]='X' ;
        }
        for (int j = i; j >=0 ; j-=k) {
            v[i][j]='X' ;
        }
        for (int j = i; j < 2*n+10; j+=k) {
            v[j][i]='X' ;
        }
        for (int j = i; j >=0 ; j-=k) {
            v[j][i]='X' ;
        }

    }

//    lp(i,10)
//    {
//        lp(j,10) cout << v[i][j] ;
//        cout << el ;
//    }
//    return;

    if (a>b)
    {

        for (int i = 0; i < n; ++i) {
            for (int j =a-b; j < n+(a-b); ++j) {
                cout << v[i][j] ;
            }
            cout << el;
        }
    }
    else
    {
        for (int i = b-a; i < n+(b-a); ++i) {
            for (int j =0; j < n; ++j) {
                cout << v[i][j] ;
            }
            cout << el;
        }


    }




}

/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */