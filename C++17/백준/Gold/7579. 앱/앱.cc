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
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
ll mod = 1000000007;
ll n, m, cc;
ll a,b,c,x,y,z;
vector<int> mrr;
vector<int> crr;
/*
Ai는 mi 바이트 사용
비활성화 한 후에 다시 실행 시 ci 비용 소요
M바이트의 메모리 소모 필요
A1~An 까지의 앱중 몇 개 비활성화 해서 M 바이트 이상의 메모리 확보
ci 합 최소화...

*/
int dp[101][10001];


void solve() {
    cin>>n>>m;

    int mc=0;
    mrr.push_back(0);
    crr.push_back(0);
    for(int i=0;i<n;i++){
        cin>>x;
        mrr.push_back(x);
    }
    for(int i=0;i<n;i++){
        cin>>x;
        mc+=x;
        crr.push_back(x);
    }

    dp[0][0] = 0;
    //dp[n][c]
    //최대 c로 얻을 수 있는 최대 메모리

    for(int i=0;i<=mc;i++){
        if(crr[1]<i) dp[1][i] = mrr[1];
    }

    for(int i=1;i<=n;i++){
        for(int j=0;j<=mc;j++){

            if(j >= crr[i]) dp[i][j] = max(dp[i-1][j],
                dp[i-1][j-crr[i]]+mrr[i]);
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }


    int ans=10000000;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=mc;j++){
            // cout<<dp[i][j]<<' ';
            if(dp[i][j] >= m) ans = min(j,ans);
        }
        // cout<<'\n';
    }
    cout<<ans;
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