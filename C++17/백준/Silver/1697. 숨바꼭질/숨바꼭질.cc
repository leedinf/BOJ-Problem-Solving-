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

ll n, k;
vector<ll> vs(100001,0);

void solve() {
    cin>>n >> k;
    queue<pll> q;
    q.push({n,0});
    vs[n] = 1;
    while(!q.empty()){
        pll tmp;
        tmp = q.front();
        q.pop();
        
        if(tmp.first == k){
            cout<<tmp.second;
            return;
        }

        
        // cout<<tmp.first<<' ';
        


        if( tmp.first+1 <=100000 && !vs[tmp.first + 1]){
            q.push({tmp.first + 1, tmp.second +1});
            vs[tmp.first+1] = 1;
        }

        if(tmp.first-1 >=0 && !vs[tmp.first-1]){
            q.push({tmp.first-1, tmp.second +1});
            vs[tmp.first-1] = 1;
        }

        if(tmp.first * 2 <=100000 && !vs[tmp.first * 2]){
            vs[tmp.first * 2] = 1;
           q.push({tmp.first * 2, tmp.second +1});

       }



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