#include <iostream>
#include <cstring>
#include <cstdlib>
#include <deque>
#include <queue>
#include <map>
#include <set>
#include <vector>
#include <list>
#include <cmath>
#include <math.h>
#include <algorithm>

//AB^-1 %P = AB^(P-2) %P


using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

ll mod = 1000000007;
ll n, m, cc;
ll a,b,c,x,y,z;

void solve() {
    // cin>>n>>m;
    cin>>n;
    vector<int> brr;
    int dp[n+1][2];
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        brr.push_back(c);
    }
    dp[0][0]=0;
    dp[0][1]=brr[0];

    for(int i=1;i<n;i++){
        dp[i][0] = max(dp[i-1][0],dp[i-1][1]);
        dp[i][1] = dp[i-1][0] + brr[i];
    }
    cout<<max(dp[n-1][0],dp[n-1][1]);
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    // cin >> cc;
    cc=1;
    for (int i = 0; i < cc; i++) {
        solve();
    }

    return 0;
}