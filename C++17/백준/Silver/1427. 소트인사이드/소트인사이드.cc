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
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

ll n, m, cc;
ll a,b,c,x,y,z;
vector<ll> arr;

void solve() {
    string s;
    cin>>s;

    for(int i=0;i<s.size()-1;i++){
        for(int j=0;j<=s.size()-i-1;j++){
            if(s[j+1]>s[j]) swap(s[j+1],s[j]);
        }
    }

    cout<<s;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    // cin >> cc;
    cc=1;
    for (int i = 0; i < cc; i++) {
        solve();
    }

    return 0;
}