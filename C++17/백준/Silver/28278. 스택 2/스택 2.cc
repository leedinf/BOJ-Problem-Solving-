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
#include <stack>


using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

ll n, m, cc;
ll a,b,c,x,y,z;
vector<ll> arr;

void solve() {
    cin>>n;
    stack<int> st;

    for(int i=0;i<n;i++){
        cin>>x;
        switch(x){
            case 1:
                cin>>x;
                st.push(x);
                break;
            case 2:
                if(!st.empty()) cout<<st.top()<<'\n';
                if(!st.empty()) st.pop();
                else cout<<-1<<'\n';
                break;
            case 3:
                cout<<st.size()<<'\n';
                break;
            case 4:
                if(st.empty()) cout<<1<<'\n';
                else cout<<0<<'\n';
                break;
            case 5:
                if(!st.empty()){
                    cout<<st.top()<<'\n';
                }
                else cout<<-1<<'\n';
        }
            
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