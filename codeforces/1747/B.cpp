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
#define ppp push_back
#define TxtIO   freopen("katryoshka.in","r",stdin); //freopen("output.txt","w",stdout);
#define el '\n'
#define yes cout << "YES" << el
#define no cout << "NO" << el
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

vector<ll> divs;
void Divisors(ll n)
{
    divs.clear();
    for (ll i = 1; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                divs.push_back(i);
            else
            {
                divs.push_back(i); divs.push_back(n / i);
            }
        }
    }
}

void solllve()
{ 
	int n ; cin >> n ; int q=n*3 ;
	cout << (n+1)/2 << el ;
	n=(n+1)/2 ; 
	int w=0 ;
	int i=1 ;
	while (n--)
	{
		cout << i << ' ' << q << el ;
		i+=3 ; q-=3 ;
	}
}
int main()
{
	//TxtIO
	xessamx
	int t = 1 ;
	cin >> t ;
	while (t--)
	{
		solllve() ;
	}

	return 0;
}

