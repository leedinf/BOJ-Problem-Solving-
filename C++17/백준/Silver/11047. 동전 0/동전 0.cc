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
vector<ll> arr;

void solve() {
    cin>>n>>m;

    while(n--){
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end(),greater<>());
    int cnt=0;
    int index=0;
    while(m>0){
        if(m-arr[index]<0) index++;
        else{
            m-=arr[index];
            cnt++;
        }
    }
    cout<<cnt;
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