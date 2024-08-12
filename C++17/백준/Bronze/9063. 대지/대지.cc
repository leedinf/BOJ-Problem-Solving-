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
    ll A,B;
    a=10001;b=10001;A=-10001;B=-10001;
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>n>>m;
        a=min(n,a);
        b=min(m,b);
        A=max(n,A);
        B=max(m,B);
    }

    cout<<(A-a)*(B-b);
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