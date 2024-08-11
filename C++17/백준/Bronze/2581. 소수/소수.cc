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
vector<ll> arr;

void solve() {
    bool prime[10001] = {1,};
    memset(prime,1,10001);
    prime[0]=false; prime[1] = false;

    for(int i=2;i<=10000;i++){
        if(prime[i]){
            for(int j=i*i;j<=10000;j+=i){
                prime[j]=false;
            }
        }
    }

    // for(int i=0;i<100;i++){
    //     cout<<prime[i]<<' ';
    // }
    cin>>n>>m;
    ll sum=0;
    ll k=0;
    for(int i=n;i<=m;i++){
        
        if(prime[i]) {
            sum+=i;
            if(k==0) k=i;
        }
    }
    if(k==0) cout<<-1;
    else cout<<sum<<'\n'<<k;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //cin >> cc;
    cc=1;
    for (int i = 0; i < cc; i++) {
        solve();
    }

    return 0;
}