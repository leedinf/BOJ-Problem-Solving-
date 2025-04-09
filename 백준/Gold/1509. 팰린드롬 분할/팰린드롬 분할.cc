#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool ispalin[2501][2501];

void solve() {
    string str;
    cin >> str;
    int n = str.size();

    // ispalin 배열 초기화
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ispalin[i][j] = false;
        }
    }

    // 회문 판별 DP
    for (int i = n - 1; i >= 0; i--) {
        for (int j = i; j < n; j++) {
            if (i == j) {
                ispalin[i][j] = true;
            } else if (str[i] == str[j]) {
                if (j - i == 1) {
                    ispalin[i][j] = true;
                } else {
                    ispalin[i][j] = ispalin[i + 1][j - 1];
                }
            }
        }
    }

    // dp 배열 초기화 (최대값으로 초기화)
    vector<int> dp(n, 1e9);  // 큰 값으로 초기화
    dp[0] = 1;

    // 분할 DP
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (ispalin[j][i]) {
                if (j == 0) {
                  dp[i] = 1; // 0부터 i까지 회문이면 1개로 분할
                } else {
                  dp[i] = min(dp[i], dp[j-1] + 1);
                }

            }
        }
    }

    cout << dp[n - 1] << '\n'; // 마지막 값 출력
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int cc = 1;
    while (cc--) {
        solve();
    }
    return 0;
}