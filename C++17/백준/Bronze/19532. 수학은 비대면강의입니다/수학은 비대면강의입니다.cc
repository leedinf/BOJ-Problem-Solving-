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

void solve() {
    ll d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    for(int i=-999;i<=999;i++){
        for(int j=-999;j<=999;j++){
            if(a*i+b*j == c && d*i + e*j == f){
                cout<<i<<' '<<j;
                return;
            }   
        }
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