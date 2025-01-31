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
ll a,b,c,x,y,z;
vector<ll> arr(10001);
vector<ll> brr(101);
vector<ll> crr(100001);

void solve() {
    arr[0]=1;

    ll k;
    cin>>n>>k;

    for(int i=0;i<n;i++){
        cin>>brr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=brr[i];j<=k;j++){
            if(j-brr[i]>=0){
                arr[j]+=arr[j-brr[i]];
            }
        }
    }

    // for(int i=0;i<=k;i++){
    //     cout<<i<<' ';
    // }
    // cout<<'\n';
    // for(int i=0;i<=k;i++){
    //     cout<<arr[i]<<' ';
    // }
    cout<<arr[k];
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
/*
1 1 1 1 1 1
1 1 1 1 2
1 1 2 2
2 2 2
1 5

*/