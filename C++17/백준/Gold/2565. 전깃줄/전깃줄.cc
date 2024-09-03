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
vector<int> arr;
//8 2 9 1 4 6 7 10
//1 4 6 7
void solve() {
    cin>>n;
    arr.resize(501,0);
    for(int i=0;i<n;i++){
        cin>>a>>b;
        arr[a-1]=b;
    }

    vector<int> lis;

    for(auto k: arr){
        if(k==0) continue;

        auto t = lower_bound(lis.begin(),lis.end(),k);
        if(t == lis.end()) lis.push_back(k);
        else{
            *t=k;
        }

        // for(auto q: lis){
        //     cout<<q<<' ';
        // }
        // cout<<'\n';
    }
    cout<<n-lis.size();
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