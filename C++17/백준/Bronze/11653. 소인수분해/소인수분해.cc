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

    bool prime[10000001];
void solve() {
    memset(prime,1,10000001);
    prime[0]=false; prime[1] = false;

    for(int i=2;i*i<=10000000;i++){
        if(prime[i]){
            for(int j=i*i;j<=10000000;j+=i){
                prime[j]=false;
            }
        }
    }
    cin>>n;
    if(n==1) return;
    for(int i=2;i<=n;i++){
        while(prime[i] && n%i==0){
            n/=i;
            cout<<i<<'\n';
        }
    }
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