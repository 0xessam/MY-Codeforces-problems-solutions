#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#pragma GCC optimize("-Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,sse4.2,popcnt,abm,mmx,avx2,tune=native")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-funroll-loops")
#pragma GCC optimize("-funroll-all-loops,-fpeel-loops,-funswitch-loops")
using namespace std ;
#define ll long long
#define ull unsigned long long
#define fixed(n) fixed << setprecision(n)
#define sz(x) int(x.size())
#define xessamx cin.sync_with_stdio(0); cin.tie(0);
#define all(x) x.begin(), (x).end()
#define sortv(v) sort(all(v))
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define el '\n'
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define FOR(i, n) for(int i = 0; i < (n); ++i)
#define FORR(i, m , n) for(int i = n; i >=m ; --i)
#define FORV(i, n,x,vvv) for(int i = 0; i < (n); ++i) { int x ; cin >> x ; vvv.ppp(x);}
#define ff first
#define ss second
#define pb push_back
bool Prime(ll n){if(n<=1)return false;
if(n<=3)return true;
if(n%2==0||n%3==0)
return false;
for(int i=5;i*
i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return
 false;return 
 true;}

	
void solllve()
{
	ll cst ; 
	ll n ; cin >> n ; 
	int a,p,bst ; cin >> a >> p ;
	bst=p ;
	cst=a*p ;
	while (--n)
	{
		cin >> a >> p ;
		bst=min(p,bst) ;
		cst+=a*bst ;
		
	}
	cout << cst ;
}
int main()
{
	//TxtIO
	xessamx
	int t = 1 ;
	//cin >> t ;
	while (t--)
	{
		solllve() ;
	}

	return 0;
}

