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
vector<ll> arr;
stack<char> st, stmp;
void solve() {
    string text, bomb;

    cin>>text>>bomb;
    bool is_bomb = true;
    for(auto k: text){
        st.push(k);
        is_bomb = true;
        if(st.size() >= bomb.size()){
            for(int i=bomb.size()-1;i>=0;i--){
                if(bomb[i] != st.top()){
                    is_bomb = false;
                    break;
                }
                stmp.push(st.top());
                st.pop();
            }
            if(!is_bomb){
                while(!stmp.empty()){
                    st.push(stmp.top());
                    stmp.pop();
                }
            }
            else{
                while(!stmp.empty()){
                    stmp.pop();
                }
            }
        }
    }
    string ans;
    if(st.empty()){
        cout<<"FRULA";
        return;
    }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
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