#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
#include <map>

using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;

void solve(){
    ll n;
    cin >> n;
    vector<pll> points(n);
    for (ll i = 0; i < n; i++) {
        cin >> points[i].first >> points[i].second;
    }

    auto polygon_area = [](const vector<pll>& pts) {
        ll area = 0;
        ll sz = pts.size();
        for (ll i = 0; i < sz; i++) {
            ll j = (i + 1) % sz;
            area += pts[i].first * pts[j].second;
            area -= pts[i].second * pts[j].first;
        }
        return abs(area) / 2.0;
    };

    cout << fixed;
    cout.precision(1);
    cout << polygon_area(points) << '\n';
}
int main() {
    ios::sync_with_stdio(false);

    cin.tie(0);

    int cc = 1;

    while(cc--){
        solve();
    }
    return 0;
}