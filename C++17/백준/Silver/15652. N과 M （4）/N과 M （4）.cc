#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
#include<list>
#include<stack>
#include<set>
#include<map>
#include<cstdlib>
#include<cmath>
#include<cstring>
#define MAX 100;
//priority_queue < pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll,ll>>>
using namespace std;
using pll = pair<long long, long long >;
using ll = long long;
ll n, m;
ll arr[9];
void f(int k, int cnt) {
	if (cnt >= m) {
		return;
	}
	arr[cnt] = k;
	for (int i = k; i <= n; i++) {
		f(i,cnt+1);
	}

	if (cnt == m-1) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
	}
}
void solve() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		f(i, 0);
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int tc = 1;
	//cin >> tc;
	while (tc--) solve();
	return 0;
}