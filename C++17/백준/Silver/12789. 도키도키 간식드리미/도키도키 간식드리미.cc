#include <iostream>
#include <cstring>
#include <cstdlib>
#include <deque>
#include <queue>
#include <map>
#include <stack>
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
    cin>>n;
    int t=1;
    stack<ll> st;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }

    int i=0;
    int cnt=0;
    while(t<n){
        if(t!=arr[i]){
            if(!st.empty() && st.top()==t){
                st.pop();
                t++;
            }
            else{
                st.push(arr[i]);
                i++;
            }
        }
        else{
            i++;
            t++;
        }
        if(i==n && st.top()!=t) break;
    }
    if(t==n) cout<<"Nice";
    else cout<<"Sad";
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