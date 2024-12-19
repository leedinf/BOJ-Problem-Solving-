#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

struct P {
    int start;
    int end;
    int value;
};

int N;
int dp[1000001], s[1000001];
P arr[1000001];

bool comp(const P &a, const P &b) {
    return a.start < b.start;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i].start >> arr[i].end >> arr[i].value;
    }

    sort(arr, arr + N, comp);

    for (int i = 0; i < N; i++) {
        s[i] = arr[i].start;
    }

    dp[N] = 0;
    for (int n = N - 1; n >= 0; n--) {
        int i = lower_bound(s + n, s + N, arr[n].end) - s;      // arr[n]의 끝나는시간에 가장 빨리 시작하는 s의 인덱스 찾기
        dp[n] = max(dp[n + 1], arr[n].value + dp[i]);
    }

    cout << dp[0] << '\n';

    return 0;
}