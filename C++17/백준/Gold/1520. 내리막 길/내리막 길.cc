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
vector<vector<ll>> vs(500,vector<ll>(500,0));
int arr[501][501]={0,};
int brr[501][501]={0,};
int dx[] = { 0, 0, 1, -1 }; 
int dy[] = { 1, -1, 0, 0 }; 
int dfs(int x, int y){
    if ( x== m-1 && y == n-1) return 1;
    if(brr[y][x] != -1) return brr[y][x];
    brr[y][x] = 0;

    for(int i=0;i<4;i++){
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx >=0 && ny >=0 && nx < m && ny <n){
            if(arr[ny][nx] < arr[y][x]){
                brr[y][x] += dfs(nx,ny);
            }
        }
    }
    
    return brr[y][x];
}
void solve() {
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            brr[i][j]=-1;
        }
    }

    dfs(0,0);
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<brr[i][j]<<' ';
    //     }
    //     cout<<'\n';
    // }
    
    cout<<brr[0][0];
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