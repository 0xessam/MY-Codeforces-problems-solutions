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

int a[200007] ;

void solllve()  {
    int mex = 0 ;
    int n ; cin >> n  ;
    vector<int>v(n) ;
    cin >> v;
    for (int i = 0; i < n; ++i) {
        a[v[i]]++ ;
    }
    while (a[mex]) mex++ ;
    vector<int>res ;
    int cur_mex = 0 , now_mex=mex;
    map<int,int>cur ;
    for (int i = 0; i < n; ++i) {
        cur[v[i]]++ ;
        while (cur[cur_mex]) cur_mex++ ;
        a[v[i]]-- ;
        if (a[v[i]] == 0) now_mex=min(v[i] , now_mex) ;
        if (cur_mex == mex)
        {
            res.push_back(mex) ;
            mex = now_mex ;
            cur_mex = 0 ;
            cur.clear() ;
        }

    }
    cout << res.size() << el ;
    cout(res);



    ::memset(a,0,sizeof a) ;
}

/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */