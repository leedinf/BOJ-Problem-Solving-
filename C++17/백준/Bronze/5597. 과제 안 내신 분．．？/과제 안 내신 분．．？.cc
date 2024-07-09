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
int a,b,c;
vector<ll> arr;

void solve() {

    arr.resize(31);
    vll krr;
    for(int i=0;i<31;i++){
        arr[i]=0;
    }
    for(int i=0;i<28;i++){
        cin>>a;
        arr[a]=1;
    }
    for(int i=1;i<=30;i++){
        if(arr[i]==0){
            krr.push_back(i);
        }
    }
    sort(krr.begin(),krr.end());
    for(auto k: krr){
        cout<<k<<'\n';
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