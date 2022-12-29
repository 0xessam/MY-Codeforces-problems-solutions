/*
??? ???? ???? ??? ???? ???? ????
(????? ????? ?????????? ????????? ???? ???????? ?????? ??? ?????????: ?????? ??? ???????? ?????????? ???? ?????? ?????????? ????? ???? ?????? ??????? ??????? ??)

*/
#include <bits/stdc++.h>
using namespace std ;
#define ll long long
#define ull unsigned long long
#define fixed(n) fixed << setprecision(n)
#define sz(x) int(x.size())
#define xessamx cin.sync_with_stdio(0); cin.tie(0);
#define all(x) x.begin(), (x).end()
#define sortv(v) sort(all(v))
#define ppp push_back
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define el '\n'
#define yes cout << "cw" << el
#define no cout << "ccw" << el
#define FOR(i, n) for(int i = 0; i < (n); ++i)
#define FORR(i, m , n) for(int i = n; i >=m ; --i)
#define FORV(i, n,x,vvv) for(int i = 0; i < (n); ++i) { int x ; cin >> x ; vvv.ppp(x);}
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef map<ll,ll> mll;
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
bool Prime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}
void solllve()
{
	int n ; cin >> n ;
	string s ; cin >> s ; 
	bool a{0},b{0},c{0},f{1} ;
	if (s[0]=='?'||s[sz(s)-1]=='?') a=1 ;
	for (int i=0 ; i<n-1 ; ++i) 
	{
		if (s[i]==s[i+1] && s[i]!='?') f=0 ;
		if (s[i]=='?' && s[i+1]=='?' ) b=1 ;
		
		if (s[i]=='?' && s[i-1]==s[i+1]) c=1 ;
	}
	if ((a||b||c )&& f) cout << "Yes" ;
	else cout << "No" ;
	//cout << a << b << c << f ;
} 
int main()
{
	//TxtIO
	xessamx
	int t = 1 ;
	// cin >> t ;
	while (t--)
	{
		solllve() ;
	}

	return 0;
}
