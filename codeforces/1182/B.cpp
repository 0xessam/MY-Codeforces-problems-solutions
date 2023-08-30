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
   //  cin >> t ;
     while (t--)
     {
           solllve() ;
     }
       return 0;
}
const int N = 505 ;
char grid[N][N] ;

void solllve()  {
    int n , m ;
    cin >> n >> m ;
    int cnt = 0 ;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j] ;
            cnt+=grid[i][j]=='*' ;
        }
    }
    queue< pair<pair<int,int>,pair<int,int>> >op ;
    for (int i = 1; i+1 < n; ++i) {
        for (int j = 1; j+1 < m; ++j) {
            if (grid[i][j] == '*' and grid[i+1][j] == '*' and
            grid[i-1][j] == '*' and grid[i][j+1] == '*' and grid[i][j-1] == '*'  )
            {
                op.push({{i+1,j},{1,0}}) ;
                op.push({{i-1,j},{-1,0}}) ;
                op.push({{i,j+1},{0,1}}) ;
                op.push({{i,j-1},{0,-1}}) ;
                cnt-=5 ;
                goto z ;
            }
        }
    }
    z:;
    if(op.empty())noo ;
    while (!op.empty())
    {
        auto u = op.front() ;
        op.pop() ;
        int r = u.first.first + u.second.first ;
        int c = u.first.second + u.second.second ;
        if ( r>=0 and r<n and c>=0 and c<m and grid[r][c] =='*' )
        {
            op.push({{ r,c },{u.second.first , u.second.second }}) ;
            cnt-- ;
        }

    }
    cnt==0?yes:no ;



}

/* لو أنكم تتوكلون على الله حق توكله لرزقكم كما يرزق الطير تغدو خماصاً وتروح بطاناً */