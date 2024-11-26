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

ll n, m, cc;
ll a, b, c, x, y, z;
vector<ll> arr;

void solve() {
    cin >> a >> b;
    for (int i = 0; i < b; i++) {
        cin >> x;
        arr.push_back(x);
    }

    int l, r;
    l = arr[0]; r = 0;
    int t = -1;
    int sum = 0;
    for (int i = 0; i < a; i++) {
        t = -1;
        for (int j = 0; j < b; j++) {
            if (arr[j] > i) {
                if(t>=0) sum += j - t -1;
                t = j;
            }
        }
    }
    cout << sum;

}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    // cin >> cc;
    cc = 1;
    for (int i = 0; i < cc; i++) {
        solve();
    }

    return 0;
}