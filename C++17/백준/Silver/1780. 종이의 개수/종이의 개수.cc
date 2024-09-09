#include <iostream>
#include <cstring>
#include <cstdlib>
#include <deque>
#include <queue>
#include <map>
#include <set>
#include <vector>
#include <list>
#include <cmath>
#include <math.h>
#include <algorithm>

using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

ll mod = 1000000007;
ll n, m, cc;
ll a, b, c, x, y, z;
int arr[2200][2200];

int check(int y, int x, int size)
{
    if (size == 1)
        return 1;
    int k = arr[y][x];
    for (int i = y; i < y + size; i++)
    {
        for (int j = x; j < x + size; j++)
        {
            if (k != arr[i][j])
                return 0;
        }
    }
    return 1;
}

void div(int y, int x, int size)
{
    int c = check(y, x, size);
    // for (int i = y; i < y + size; i ++)
    // {
    //     for (int j = x; j < x + size; j ++)
    //     {
    //         cout << arr[i][j] << ' ';
    //     }
    // }
    // cout << '\n';
    if (!c)
    {
        for (int i = y; i < y + size; i += size / 3)
        {
            for (int j = x; j < x + size; j += size / 3)
            {
                div(i, j, size / 3);
            }
        }
    }
    else
    {
        
        if (arr[y][x] == -1)
            a++;
        if (arr[y][x] == 0)
            b++;
        if (arr[y][x] == 1){
            z++;
        }
    }
}
void solve()
{
    cin >> n;
    a = 0;
    b = 0;
    z = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    div(0, 0, n);
    cout << a << '\n'
         << b << '\n'
         << z;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // cin >> cc;
    cc = 1;
    for (int i = 0; i < cc; i++)
    {
        solve();
    }

    return 0;
}