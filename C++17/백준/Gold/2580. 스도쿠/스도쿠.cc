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
ll a,b,c,x,y,z;
set<int> sq[9];
set<int> lo[9];
set<int> col[9];
int arr[9][9];

bool check(int a, int b, int c) {
    if (lo[b].find(c) != lo[b].end()) return false;
    if (col[a].find(c) != col[a].end()) return false;
    if (sq[3*(b/3) + (a/3)].find(c) != sq[3*(b/3) + (a/3)].end()) return false;
    return true;
}

void print() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
}

bool solveSudoku(int a, int b) {
    if (a == 9) {
        a = 0;
        b++;
        if (b == 9) return true;  // 모든 칸을 채운 경우
    }
    if (arr[b][a] != 0) return solveSudoku(a + 1, b);  // 이미 채워진 칸

    for (int k = 1; k <= 9; k++) {
        if (check(a, b, k)) {
            arr[b][a] = k;
            lo[b].insert(k);
            col[a].insert(k);
            sq[3*(b/3) + (a/3)].insert(k);

            if (solveSudoku(a + 1, b)) return true;

            arr[b][a] = 0;
            lo[b].erase(k);
            col[a].erase(k);
            sq[3*(b/3) + (a/3)].erase(k);
        }
    }

    return false;
}

void solve() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> arr[i][j];
            if (arr[i][j] != 0) {  // 0이 아닌 경우에만 집합에 추가
                lo[i].insert(arr[i][j]);
                col[j].insert(arr[i][j]);
                sq[3*(i/3) + (j/3)].insert(arr[i][j]);
            }
        }
    }

    if (solveSudoku(0, 0)) {
        print();
    } else {
        cout << "No solution exists\n";
    }
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    cc = 1;
    for (int i = 0; i < cc; i++) {
        solve();
    }

    return 0;
}
