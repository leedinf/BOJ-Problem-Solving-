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
vector<ll> arr;

void solve() {
    cin>>n;
    map<string,int> mp;
    set<string> st;
    string s1,s2;
    for(int i=0;i<n;i++){
        cin>>s1>>s2;
        if(s2=="enter"){
            mp[s1]=1;
        }
        else{
            mp[s1]=0;
        }
        st.insert(s1);
    }
    vector<string> srr;
    for(auto k: st){
        if(mp[k]==1) srr.push_back(k);
    }

    sort(srr.begin(),srr.end(),greater<>());

    for(auto k:srr){
        cout<<k<<'\n';
    }
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //cin >> cc;
    cc=1;
    for (int i = 0; i < cc; i++) {
        solve();
    }

    return 0;
}