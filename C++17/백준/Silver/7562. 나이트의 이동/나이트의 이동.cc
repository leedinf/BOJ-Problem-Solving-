#include <iostream>
#include <queue>
#include <tuple>

using namespace std;

int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

void solve() {
    int l;
    cin >> l;

    int start_x, start_y;
    cin >> start_x >> start_y;

    int target_x, target_y;
    cin >> target_x >> target_y;

    bool vs[301][301] = {false};
    queue<tuple<int, int, int>> q;
    q.push({start_x, start_y, 0});
    vs[start_x][start_y] = true;

    while (!q.empty()) {
        auto [x, y, count] = q.front(); // 튜플 한번에 받아오기
        q.pop();

        if (x == target_x && y == target_y) {
            cout << count << '\n';
            return;
        }

        for (int i = 0; i < 8; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < l && ny >= 0 && ny < l && !vs[nx][ny]) {
                vs[nx][ny] = true;
                q.push({nx, ny, count + 1});
            }
        }
    }

    cout << -1 << '\n'; // 목표 지점에 도달할 수 없는 경우 -1 출력
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}