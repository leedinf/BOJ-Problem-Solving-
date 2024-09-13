#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

ll n, Size;

// 행렬 출력 함수
void p(const vector<vector<int>>& v) {
    for (int i = 0; i < Size; i++) {
        for (int j = 0; j < Size; j++) {
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }
}

// 행렬 곱셈 함수
vector<vector<int>> mul(const vector<vector<int>>& a, const vector<vector<int>>& b) {
    vector<vector<int>> v(Size, vector<int>(Size, 0));
    for (int i = 0; i < Size; i++) {
        for (int j = 0; j < Size; j++) {
            for (int k = 0; k < Size; k++) {
                v[i][j] += (a[i][k] * b[k][j]);
                v[i][j] %= 1000;
            }
        }
    }
    return v;
}

// 행렬의 거듭제곱을 계산하는 함수
vector<vector<int>> wornl(vector<vector<int>> h, ll n) {
    if (n == 1) {
        for (int i = 0; i < Size; i++) {
            for (int j = 0; j < Size; j++) {
                h[i][j] %= 1000;
            }
        }
        return h;
    }
    if (n % 2 == 0) {
        vector<vector<int>> arr = wornl(h, n / 2);
        return mul(arr, arr);
    } else {
        vector<vector<int>> arr = wornl(h, n / 2);
        return mul(mul(arr, arr), h);
    }
}

void solve() {
    cin >> Size >> n;

    // 행렬 입력
    vector<vector<int>> v(Size, vector<int>(Size, 0));
    for (int i = 0; i < Size; i++) {
        for (int j = 0; j < Size; j++) {
            cin >> v[i][j];
            v[i][j] %= 1000;
        }
    }

    // 행렬 거듭제곱 계산
    vector<vector<int>> sol = wornl(v, n);

    // 최종 결과 출력
    p(sol);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
    
    return 0;
}
