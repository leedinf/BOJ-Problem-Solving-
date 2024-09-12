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

ll n, m, cc;
ll a,b,c,x,y,z;
vector<ll> arr;

void solve() {
    cin>>n>>m;

    int arr[n][m];
    for(int i=0;i<n;i++){
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }

    int k;
    cin>>m>>k;
    int brr[m][k];
    for(int i=0;i<m;i++){
        for (int j = 0; j < k; j++)
        {
            cin>>brr[i][j];
        }
    }
    // a[0][0] * b[0][0] + a[0][1] * b[1][0]
    int crr[n][k]={0,};
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            crr[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        
        for(int j=0;j<k;j++){
            
            for(int t=0;t<m;t++){
                crr[i][j] += arr[i][t] * brr[t][j];
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cout<<crr[i][j]<<' ';
        }
        cout<<'\n';
    }
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