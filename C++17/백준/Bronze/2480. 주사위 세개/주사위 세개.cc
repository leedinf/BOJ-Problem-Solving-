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
vector<ll> arr;

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c) cout<< 10000+a*1000;
    else if(a==b || b==c) cout<<1000+b*100;
    else if(a==c) cout<<1000+a*100;
    else cout<<max(a,max(b,c))*100;
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