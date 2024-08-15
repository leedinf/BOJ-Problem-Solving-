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

void solve() {
    vector<bool> prime(10000001,true);

    for(int i=2;i*i<10000001;i++){
        if(prime[i]){
            for(int j=i*i;j<=10000001;j+=i){
                prime[j]=false;
            }
        }
    }

    for(int i=2;i<10000001;i++){
        if(prime[i]) arr.push_back(i);
    }

    cin>>n;
    for(int i=0;i<n;i++){
        int sum=0;
        cin>>x;
        for(auto k: arr){
            if(x<k || x-k <k) break;
            if(prime[x-k]) sum++;
        }
        cout<<sum<<'\n';
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