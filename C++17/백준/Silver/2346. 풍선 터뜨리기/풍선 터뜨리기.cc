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
deque<pll> dq;
void solve() {
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        dq.push_back({x,i+1});
    }
    int cnt=0;
    while(!dq.empty()){
        cnt=0;
        a=dq.front().first;
        arr.push_back(dq.front().second);
        dq.pop_front();
        if(a>0){
            for(int i=0;i<a-1;i++){
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
        }
        else{
            for(int i=0;i<abs(a);i++){
                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
            }

        }
    }

    for(auto k: arr){
        cout<<k<<' ';
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