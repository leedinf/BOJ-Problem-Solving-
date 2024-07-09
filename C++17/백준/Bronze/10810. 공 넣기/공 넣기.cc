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
int a,b,c;
vector<ll> arr;

void solve() {

    cin>>n>>m;
    arr.resize(n);
    for(int i=0;i<m;i++){
        cin>>a>>b>>c;
        a--;
        b--;
        for(int j=a;j<=b;j++){
            arr[j]=c;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
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