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

ll n, m, cc;
vector<ll> arr;

void solve() {
    string s;
    cin>>s;
    set<string> ss;
    string k="";
    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            k="";
            for(int q=i;q<=j;q++){
                k+=s[q];
            }
            ss.insert(k);
        }
    }
    cout<<ss.size();
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //cin >> cc;
    cc=1;
    for (int i = 0; i < cc; i++) {
        solve();
    }

    return 0;
}