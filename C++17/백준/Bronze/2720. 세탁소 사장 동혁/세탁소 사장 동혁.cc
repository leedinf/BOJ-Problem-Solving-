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
int a,b,x;
vector<ll> arr;

void solve() {
    cin>>a;
    cout<<a/25<<' ';
    a%=25;
    cout<<a/10<<' ';
    a%=10;
    cout<<a/5<<' ';
    a%=5;
    cout<<a<<'\n';
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> cc;
    //cc=1;
    for (int i = 0; i < cc; i++) {
        solve();
    }

    return 0;
}