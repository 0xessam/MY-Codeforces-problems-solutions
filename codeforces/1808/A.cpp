#include  <bits\stdc++.h>
using namespace std;
using ll = long long int;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    //freopen("equal.in", "r", stdin);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        int l,r;
        cin >> l >> r;
        int ans,maxi=-10;
        for(int i=max(l,r-100);i<=r;i++){
            string s = to_string(i);
            int mx=-1,mn=10;
            sort(s.begin(),s.end());
            mx=s.back()-'0',mn=s.front()-'0';
            if(mx-mn>=maxi)
                ans = i, maxi=mx-mn;
        }
        cout<<ans<<'\n';
    }
    return 0 ; 
}