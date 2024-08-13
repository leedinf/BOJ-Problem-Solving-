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

using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

ll n, m, cc;
vector<ll> arr;

void solve() {
    cin>>n>>m;
    int x;
    set<int> st1, st2, st3;
    for(int i=0;i<n;i++){
        cin>>x;
        st1.insert(x);
    }
    for(int i=0;i<m;i++){
        cin>>x;
        st2.insert(x);
    }
    int s;
    for(auto k:st1){
        if(st2.find(k)!=st2.end()){
            st3.insert(k);
        }
    }
    // for(auto k:st3){
    //     cout<<k<<'\n';
    // }
    cout<<st1.size()+st2.size()-2*st3.size();
    
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //cin >> cc;
    cc=1;
    for (int i = 0; i < cc; i++) {
        solve();
    }

    return 0;
}