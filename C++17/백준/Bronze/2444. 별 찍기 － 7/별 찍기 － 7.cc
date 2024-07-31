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
    cin>>n;

    for(int i=1;i<n;i++){
        for(int a=0;a<n-i;a++){
            cout<<' ';
        }
        for(int a=0;a<2*i-1;a++){
            cout<<'*';
        }
        cout<<'\n';
    }
    
    for(int i=0;i<n;i++){
        for(int a=0;a<i;a++){
            cout<<' ';
        }
        for(int a=0;a<2*n-2*i-1;a++){
            cout<<'*';
        }
        cout<<'\n';
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