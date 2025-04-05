#include <iostream>
#include <cstring>
#include <queue>
#include <tuple>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef tuple<int, int, int> tiii;

ll n, m;
ll arr[1001][1001];
ll vs[1001][1001][2];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void solve() {
    cin >> n >> m;

    string str;
    for (int i = 0; i < n; i++) {
        cin >> str;
        for (int j = 0; j < m; j++) {
            arr[i][j] = str[j] - '0';
        }
    }

    memset(vs, -1, sizeof(vs));

    queue<tiii> q;
    q.push({0, 0, 0});
    vs[0][0][0] = 1;

    while (!q.empty()) {
        int y, x, broken;
        tie(y, x, broken) = q.front();
        q.pop();

        if (y == n - 1 && x == m - 1) {
            cout << vs[y][x][broken] << endl;
            return;
        }

        for (int i = 0; i < 4; i++) {
            int ty = y + dy[i];
            int tx = x + dx[i];

            if (tx < m && tx >= 0 && ty < n && ty >= 0) {
                if (arr[ty][tx] == 0) {
                    if (vs[ty][tx][broken] == -1) {
                        vs[ty][tx][broken] = vs[y][x][broken] + 1;
                        q.push({ty, tx, broken});
                    }
                } else {
                    if (broken == 0) {
                        if (vs[ty][tx][1] == -1) {
                            vs[ty][tx][1] = vs[y][x][0] + 1;
                            q.push({ty, tx, 1});
                        }
                    }
                }
            }
        }
    }

    cout << -1 << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int cc = 1;
    // cin >> cc;
    for (int i = 0; i < cc; i++) {
        solve();
    }

    return 0;
}