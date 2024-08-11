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
ll a,b,x;
vector<ll> arr;

void solve() {
    cin>>a>>b>>n;
    ll k;
    x=n/(a-b);
    k=n%(a-b);
    while(x*(a-b)+a>=n){
        x--;
    }
    x+=2;
    cout<<x;

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