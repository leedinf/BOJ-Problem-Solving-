#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
#include<list>
#include<stack>
#include<set>
#include<map>
using namespace std;
using ll = long long;

void solve() {

}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n, L,w;
	cin >> n >> L >> w;
	queue <ll> a;
	vector<int> wei(n+4);
	vector<int> pos(n+4);
	for (int i = 0; i < n; i++) {
		cin >> wei[i];
	}
	ll x = 0;
	ll nowei = 0;
	ll l=0, r = 0;
	ll t = 0;
	while (pos[n-1]<L) {
		if (pos[l] >= L) {
			nowei -= wei[l];
			l++;
		}
		if (nowei+wei[x] <= w && x<n) {
			r = x;
			nowei += wei[x];
			x++;
		}
		for (int i = l; i <= r; i++) {
			pos[i]++;
		}
		t++;
	}
	cout << ++t;

}