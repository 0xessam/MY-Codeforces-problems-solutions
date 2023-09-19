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
//    cin >> t ;
    while (t--)
    {
        solllve() ;
    }
    return 0;
}

void solllve() {
    int n , q, k ;
    cin >> n >> q >> k ;
    vector<int>v(n+1) ;
    for (int i = 0; i < n; ++i) {
        cin >> v[i+1] ;
    }
    vector<int>pre(n+2,0) ;
    pre.back() = k ;
    for (int i = 1; i < n; ++i) {
        pre[i] = (v[i]-v[i-1]-1) + (v[i+1]-v[i]-1) ;
        pre[i]+=pre[i-1] ;
    }
    while (q--)
    {
        int l,r ;
        cin >> l >> r ;
        if ( !(l-r) ) cout << k-1 << el ;
        else
        {
            cout << pre[r-1] - pre[l] + ( v[l]-1 ) +( v[l+1]-v[l]-1) + ( k-v[r]-1 ) +(v[r] - v[r-1] - 1) +1 << el ;

        }


        //2 4 6 7 8 9
        //2 2 1 0 0 1





    }

}


/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */