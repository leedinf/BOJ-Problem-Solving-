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

// ll n, m;
typedef struct{
    ll m,v;
}juel;
bool cmp(juel a, juel b){
    return a.m < b.m;
}
void solve() {
    ll k;
    ll a,b;
    ll n;
    cin>>n>>k; 
    vector<juel> arr(n);
    vector<ll> bag(k);
    priority_queue<ll, vector<ll>, less<ll>> max_value;

    for(int i=0;i<n;i++){
        cin>>a>>b;
        arr[i].m = a;
        arr[i].v = b;
    }

    for(int i=0;i<k;i++){
        cin>>a;
        bag[i]= a;
    }
    sort(bag.begin(),bag.end());
    sort(arr.begin(),arr.end(),cmp);
    ll idx=0;
    ll ans = 0 ;
    for(auto t : bag){
        while(arr[idx].m <= t && idx < n){
            max_value.push(arr[idx].v); //cout<<arr[idx].v<< ' ';
            ++idx;
        }
        if(!max_value.empty()){
            ans += max_value.top();
            // cout<<max_value.top()<<' ';
            max_value.pop();
        }
    }

    cout<<ans;
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