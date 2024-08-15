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

bool is_prime(ll q){
    if(q<2) return false;
    for(ll i=2;i*i<=q;i++){
        if(q%i==0) return false;
    }
    return true;
}
void solve() {
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        while(!is_prime(x)){
            x++;
        }
        cout<<x<<'\n';
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