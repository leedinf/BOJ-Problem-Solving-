#include <iostream>
#include <cstring>
#include <cstdlib>
#include <deque>
#include <queue>
#include <map>
#include <set>
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
vector<ll> facto(4000001);
ll Q=1000000007;
void solve() {
    set<string> st;
    string s1,s2;
    cin>>n;
    st.insert("ChongChong");
    while(n--){
        cin>>s1>>s2;

        if(st.find(s1)!=st.end()){
            if(st.find(s2)==st.end()) {
                st.insert(s2);
            }
        }
        if(st.find(s2)!=st.end()){
            if(st.find(s1)==st.end()) {
                st.insert(s1);
            }
        }

    }
    cout<<st.size();;
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