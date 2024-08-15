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
int gcd(int q, int w){
    if(q>w) swap(q,w);
    while(w!=0){
        int r = q % w;
        q = w;
        w = r;
    }
    return q;
}
void solve() {
    ll t;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    t=gcd(abs(arr[0]-arr[1]),abs(arr[1]-arr[2]));
    for(int i=3;i<n;i++){
        t=gcd(abs(arr[i]-arr[i-1]),t);
    }
    x=arr[0];
    ll sum=0;
    for(auto k: arr){
        while(x!=k){
            sum++;
            x+=t;
        }
        x+=t;
    }
    cout<<sum;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cc=1;
    // cin >> cc;
    for (int i = 0; i < cc; i++) {
        solve();
    }

    return 0;
}
