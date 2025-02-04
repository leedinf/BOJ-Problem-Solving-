#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool cmp(string, string);
int main() {
	int n;
	cin >> n;
	vector<string> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end(), cmp);
	for (int i = 0; i < n; i++) {
		if (i > 0) {
			if (arr[i] == arr[i - 1]) {
				continue;
			}
		}
		cout << arr[i] << '\n';
	}
}

bool cmp(string a, string b) {
	int a_v=0, b_v=0;
	if (a.length() != b.length())
		return a.length() < b.length();
	else {
		for (int i = 0; i < a.length();i++) {
			if (a[i] >= '0' && a[i] <= '9') {
				a_v += (a[i]-'0');
			}
			if (b[i] >= '0' && b[i] <= '9') {
				b_v += (b[i] - '0');
			}
		}
		if (a_v != b_v) {
			return a_v < b_v;
		}
	}
	return a < b;
}

