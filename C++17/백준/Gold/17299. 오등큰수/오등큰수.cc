#include <iostream>
#include <cstring>
#include <cstdlib>
#include <deque>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
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
vector<ll> rotn(1000001,0);
vector<ll> num;
vector<ll> ans;

stack<ll> st;
void solve() {
    cin>>n;
    ans.resize(n);
    for(int i=0;i<n;i++){
        
        cin>>x;
        num.push_back(x);
        rotn[x]++;
    }

    for(int i=n-1;i>=0;i--){

        while(!st.empty() && rotn[st.top()]<=rotn[num[i]]){
            st.pop();
        }
        if(st.empty()){
            ans[i] = -1;
        }
        else{
            ans[i] = st.top();
        }
        st.push(num[i]);
    }

    for(auto k: ans){
        cout<<k<<' ';
    }
// 3  3 2 1 1 2  3
//-1 -1 1 2 2 1 -1
    
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