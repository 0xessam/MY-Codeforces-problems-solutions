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
    // cin >> t ;
     while (t--)
     {
           solllve() ;
     }
       return 0;
}
const int N = 1e4+5 ;
int target[N] , now[N] , n ;
struct union_set
{
	vector<int> f;
	int n;
	union_set() {}
	union_set(int nn) :n(nn),f(nn+1)
	{
		iota(all(f),0);
	}
	int getf(int u) { return f[u]==u?u:f[u]=getf(f[u]); }
	void merge(int u,int v)
	{
		u=getf(u); v=getf(v);
		f[u]=v;
	}
	bool connected(int u,int v) { return getf(u)==getf(v); }
};

int ans ;
vector<int>g[N] ;
void dfs(int v , int par , int cur_color )
{
    if (target[v] != cur_color)
    {
        cur_color=target[v] ;
        ans++ ;
    }
    for(auto ch : g[v])
    {
        if (ch!= par)
        {
            dfs(ch,v,cur_color) ;
        }
    }


}

void solllve()  {
    cin >> n ;
    union_set DSU(n) ;
    for (int i = 2; i <= n; ++i) {
        int v ; cin >> v ;
        g[v].push_back(i) ;
    }
    for (int i = 1; i <= n; ++i) {
        cin >> target[i] ;
    }
     dfs(1,0,0) ;
    cout << ans << el;






}

/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */