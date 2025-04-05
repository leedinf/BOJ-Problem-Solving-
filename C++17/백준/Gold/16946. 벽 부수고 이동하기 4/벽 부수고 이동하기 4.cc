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

ll n, m;
ll arr[1001][1001];
pll brr[1001][1001];
ll vs[1001][1001];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
queue<pll> q;
int dfs(int y, int x){
    if(vs[y][x] == 1) return 0;
    int ty,tx;
    int sum=1;
    vs[y][x] = 1;
    q.push({y,x});
    for(int i=0;i<4;i++){
        ty = y + dy[i];
        tx = x + dx[i];
        if(tx < m && tx >=0 && ty <n && ty >=0){
            if(vs[ty][tx] == 0 && arr[ty][tx]==0){
                sum += dfs(ty,tx);
                sum %=10;
            } 
        }
    }

    return sum%10;
}
void solve() {
    cin>>n>>m;
    ll x;

    string str;
    for(int i=0;i<n;i++){
        cin>>str;
        for(int j=0;j<m;j++){
            arr[i][j] = str[j] - '0';
        }
    }
    ll cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vs[i][j] == 0 && arr[i][j] == 0){
                ll tmp = dfs(i,j);
                while(!q.empty()){
                    brr[q.front().first][q.front().second].first = tmp;
                    brr[q.front().first][q.front().second].second = cnt;
                    q.pop();
                }
                cnt++;
            }
        }
    }
    set<ll> s;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            // cout<<brr[i][j].first<<' ';
            vs[i][j] = 0;
            if(arr[i][j] == 1){
                vs[i][j] = 1;
                for(int k=0;k<4;k++){
                    ll ty, tx;
                    ty = i + dy[k];
                    tx = j + dx[k];
                    if(tx < m && tx >=0 && ty < n && ty >=0){
                        if(arr[ty][tx]==0 && s.find(brr[ty][tx].second) == s.end()){
                            vs[i][j] += brr[ty][tx].first;
                            vs[i][j] %= 10;
                            s.insert(brr[ty][tx].second);
                        }
                    }
                }
                s.clear();
            }
        }
        // cout<<'\n';
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << vs[i][j];
        }
        cout<<'\n';
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int cc = 1;
    // cin >> cc;
    for (int i = 0; i < cc; i++) {
        solve();
    }

    return 0;
}