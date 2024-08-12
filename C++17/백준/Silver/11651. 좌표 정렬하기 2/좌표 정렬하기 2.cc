#include <iostream>
#include <cstring>
#include <cstdlib>
#include <deque>
#include <queue>
#include <map>
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

bool cmp(pll a,pll b){
    if(a.second == b.second) return a.first< b.first;
    return a.second< b.second;
}
void solve() {
    cin>>n;

    vector<pll> prr(n);
    for(int i=0;i<n;i++){
        cin>>prr[i].first>>prr[i].second;
    }

    sort(prr.begin(),prr.end(),cmp);

    for(int i=0;i<n;i++){
        cout<<prr[i].first<<' '<<prr[i].second<<'\n';
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