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
int a,b;
vector<ll> arr;

void solve() {
    // cin>>n>>m;
    string s[5];
    int size=0;
    for(int i=0;i<5;i++){
        cin>>s[i];
        if(size<s[i].size()){
            size=s[i].size();
        }
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<5;j++){
            if(i<s[j].size()){
                cout<<s[j][i];
            }
        }
    }
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