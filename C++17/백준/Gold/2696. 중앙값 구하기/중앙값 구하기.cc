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
// #include <priority_queue>

using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

ll n, m;
vector<ll> arr;
void solve() {
    cin>>n;
    priority_queue<ll, vector<ll>, less<ll>> pq_max;
    priority_queue<ll, vector<ll>, greater<ll>> pq_min;
    ll x;
    int cnt=0;
    cout<<(n+1)/2<<'\n';
    for(int i=0;i<n;i++){
        cin>>x;
        if(pq_max.empty()) pq_max.push(x);
        else if(x < pq_max.top()){
            pq_min.push(pq_max.top());
            pq_max.pop();
            pq_max.push(x);
        }
        else pq_max.push(x);
        
        if(!pq_max.empty() && !pq_min.empty()){
            while( !pq_max.empty() && !pq_min.empty() && pq_max.top() > pq_min.top()){
                pq_max.push(pq_min.top());
                pq_min.pop();
            }
        }
        while(pq_max.size() > pq_min.size()){
            pq_min.push(pq_max.top());
            pq_max.pop();
        }
        while(pq_max.size()+1 < pq_min.size()){
            pq_max.push(pq_min.top());
            pq_min.pop();
        }
        if(i%2==0){
            cout<<pq_min.top()<<' ';
            cnt++;
            if(cnt%10==0) cout<<'\n';
        }
        
        // cout<<pq_min.top()<< ' ';
    }
    cout<<'\n';

    // while(!pq_min.empty()){
    //     cout<<pq_min.top();
    //     pq_min.pop();
    // }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int cc = 1;
    cin >> cc;
    for (int i = 0; i < cc; i++) {
        solve();
    }

    return 0;
}