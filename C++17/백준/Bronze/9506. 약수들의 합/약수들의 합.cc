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
ll a,b,x;
vector<ll> arr;

void solve() {
    while(1){
        cin>>a;
        if(a==-1) return;
        int sum=0;
        for(int i=1;i<a;i++){
            if(a%i==0){
                arr.push_back(i);
                sum+=i;
            }
        }
        if(sum==a){
            cout<<a<<" = "<<arr[0];
            for(int i=1;i<arr.size();i++){
                cout<<" + "<<arr[i];
            }
            cout<<'\n';
        }
        else{
            cout<<a<<" is NOT perfect.\n";
        }
        arr.clear();
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