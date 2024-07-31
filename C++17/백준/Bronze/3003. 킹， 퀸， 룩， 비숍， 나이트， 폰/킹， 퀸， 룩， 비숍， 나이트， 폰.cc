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
int a,b;
vector<ll> arr;

void solve() {
    arr.resize(6);
    arr[0]=1;
    arr[1]=1;
    arr[2]=2;
    arr[3]=2;
    arr[4]=2;
    arr[5]=8;
    int x;
    for(int i=0;i<6;i++){
        cin>>x;
        arr[i]-=x;
    }for(int i=0;i<6;i++){
        cout<<arr[i]<<' ';
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