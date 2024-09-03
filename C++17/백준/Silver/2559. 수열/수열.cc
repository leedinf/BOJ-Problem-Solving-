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
ll a,b,c,x,y,z;
vector<ll> arr;

void solve() {
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    int sum=0;
    int M=0;
    for(int i=0;i<m;i++){
        M+=arr[i];
    }
    sum=M;
    for(int i=m;i<n;i++){
        M+=arr[i]-arr[i-m];
        sum=max(M,sum);
    }

    cout<<sum;
    
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