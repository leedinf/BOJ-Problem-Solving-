#include <iostream>
#include <cstring>
#include <cstdlib>
#include <deque>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <vector>
#include <list>
#include <cmath>
#include <math.h>
#include <algorithm>


using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
ll mod=10000000007;
ll n, m, cc;
ll a,b,c,x,y,z;
void candoit(){
    
}
void solve() {
    // cin>>n;
    cin>>m;
    vector<int> brr(m);
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    vector<vector<int>> arr(m,vector<int>(m));
    vector<vector<int>> crr(m,vector<int>(m));
    for(int i=0;i<m;i++){
        arr[i][i]=brr[i];
        crr[i][i]=0;
    }

    for(int d = 1;d<m;d++){
        for(int i=0;i+d<m;i++){
            int mn=mod;
            for(int j=i;j<i+d;j++){
                mn=min(crr[i][j]+crr[j+1][i+d]+arr[i][j]+arr[j+1][i+d],mn);
            }
            crr[i][i+d]=mn;
            arr[i][i+d]=arr[i][i+d-1]+arr[i+d][i+d];
        }
    }

    // for(int i=0;i<m;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<crr[i][j]<<' ';
    //     }
    //     cout<<'\n';
    // }
    cout<<crr[0][m-1]<<'\n';
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cc=1;
    cin >> cc;
    for (int i = 0; i < cc; i++) {
        solve();
    }

    return 0;
}