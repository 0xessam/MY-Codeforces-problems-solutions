
#include <bits/stdc++.h>
using namespace std ;
#define ll long long
#define ull unsigned long long
#define fixed(n) fixed << setprecision(n)
#define sz(x) int(x.size())
#define xessamx cin.sync_with_stdio(0); cin.tie(0);
#define all(x) x.begin(), (x).end()
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define el '\n'
#define yes cout << "YES" << el
#define no cout << "NO" << el
#define FOR(i, n) for(int i = 0; i < (n); ++i)
bool prime(int x) {for(int i=2;i*i<=x;i++) if(!(x%i)) return 0;return 1;}
 
void solllve()
{
	int n ; cin >> n ; int near=n ;
	for (;;)
	{
	
	for (;!prime(near);)
	{
		near++ ;
	}
	if (!prime(near-n+1)) break ;
	else near+=250 ;
	
	}
	
	
	for (int i=0 ; i<n ; i++)
	{
		for (int j=0 ; j<n ; j++)
		{
			if (j==i) cout << near-n+1 <<' ';
			else cout << 1 <<' ' ;
		}
		cout << el ;
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
 
	return 0;}