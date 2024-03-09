#include <iostream>
#include <cstring>
#include <cstdlib>
#include <deque>
#include <queue>
#include <map>
#include <vector>
#include <list>
#include <cmath>
#include <math.h>
#include <algorithm>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

ll n, m, cc;
vector<int> arr;
ll func(ll num)
{
    ll cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        cnt += min(n, num / i);
    }
    return cnt;
}
void solve()
{
    cin >> n;
    ll k;
    cin >> k;
    ll left = 1, right = n * n;
    ll t = 0;
    ll mid = 0;
    while (left <= right)
    {
        mid = (left + right) / 2;
        t = func(mid);

        if (t < k)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    ll ans = 0;
    cout<<left;
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