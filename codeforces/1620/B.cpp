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
#define all(x) x.begin(), (x).end()
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
//const int N = 1e4+5 ;
//int target[N] , now[N] , n ;
//struct union_set
//{
//	vector<int> f;
//	int n;
//	union_set() {}
//	union_set(int nn) :n(nn),f(nn+1)
//	{
//		iota(all(f),0);
//	}
//	int getf(int u) { return f[u]==u?u:f[u]=getf(f[u]); }
//	void merge(int u,int v)
//	{
//		u=getf(u); v=getf(v);
//		f[u]=v;
//	}
//	bool connected(int u,int v) { return getf(u)==getf(v); }
//};
//
//int ans ;
//vector<int>g[N] ;
//void dfs(int v , int par , int cur_color )
//{
//    if (target[v] != cur_color)
//    {
//        cur_color=target[v] ;
//        ans++ ;
//    }
//    for(auto ch : g[v])
//    {
//        if (ch!= par)
//        {
//            dfs(ch,v,cur_color) ;
//        }
//    }
//
//
//}
int re()
{
    int x ; cin >> x;
    return x ;
}
void solllve()  {
    int mx= -1 ;
    int w , h , k ;
    cin >> w >> h ;

    set<int>st ;
    cin >> k ;
    lp(i,k) st.insert(re()) ;
    mx = max(mx , (*st.rbegin()-*st.begin())*h ) ;
    st.clear();
    cin >> k ;
    lp(i,k) st.insert(re()) ;
    mx = max(mx , (*st.rbegin()-*st.begin())*h ) ;
    st.clear();
    cin >> k ;
    lp(i,k) st.insert(re()) ;
    mx = max(mx , (*st.rbegin()-*st.begin())*w ) ;
    st.clear();
    cin >> k ;
    lp(i,k) st.insert(re()) ;
    mx = max(mx , (*st.rbegin()-*st.begin())*w ) ;
    st.clear();
    cout << mx << el ;






}

/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */