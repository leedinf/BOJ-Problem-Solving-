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
ll a, b, c, x, y, z;
vector<int> arr;

void solve()
{
    string s;
    cin >> s;
    string q;
    vector<char> crr;
    for (auto k : s)
    {
        if (k == '+' || k == '-')
        {
            crr.push_back(k);
            arr.push_back(stoi(q));
            q = "";
        }

        else
            q += k;
    }
    arr.push_back(stoi(q));

    ll sum = 0;
    sum += arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (crr[i - 1] == '-')
        {
            int t=arr[i];
            i++;
            while(i-1<crr.size() && crr[i-1] =='+'){
                t+=arr[i];
                i++;
            }
            if(i-1<crr.size() && crr[i-1]=='-'){
                i--;
            }
            sum-=t;
        }
        else sum+=arr[i];
    }

    cout<<sum;
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