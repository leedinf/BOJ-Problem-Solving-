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
int gcd(int q, int w){
    if(q>w) swap(q,w);
    while(w!=0){
        int r = q % w;
        q = w;
        w = r;
    }
    return q;
}
void solve() {
    int t;
    cin>>a>>b;
    t=gcd(a,b);
    cout<<t*(a/t)*(b/t)<<'\n';
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //cc=1;
    cin >> cc;
    for (int i = 0; i < cc; i++) {
        solve();
    }

    return 0;
}
