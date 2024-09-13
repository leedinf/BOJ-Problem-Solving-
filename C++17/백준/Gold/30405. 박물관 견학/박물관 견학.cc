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

//AB^-1 %P = AB^(P-2) %P


using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

ll mod = 1000000007;
ll n, m, cc;
ll a,b,c,x,y,z;
vector<ll> arr;

void solve() {
    cin>>n>>m;
    int k;
    //|x-a| + |x - b|
    for(int i=0;i<n;i++){
        cin>>k;
        for(int j=0;j<k;j++){
            cin>>x;
            if(j==0 || j==k-1)arr.push_back(x);
        }
    }
    sort(arr.begin(),arr.end());
    // 1,5,7,12,17,18
    cout<<arr[arr.size()/2-1];
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