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

    cout<<(a+b)%c;
    cout<<'\n';
    cout<<(a%c+b%c)%c;
    cout<<'\n';
    cout<<(a*b)%c;
    cout<<'\n';
    cout<<((a%c)*(b%c))%c;
    cout<<'\n';
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