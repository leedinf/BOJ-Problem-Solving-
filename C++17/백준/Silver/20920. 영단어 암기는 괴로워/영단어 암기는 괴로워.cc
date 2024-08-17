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

unordered_map<string,unsigned int> umap;

bool cmp(string s1,string s2){
    if(umap[s1] != umap[s2]) return umap[s1] > umap[s2];
    else if(s1.size() != s2.size()) return s1.size() > s2.size();
    else{
        return s1<s2;
    }
}
void solve() {
    cin>>n>>m;
    string s;
    vector<string> vs;
    set<string> st;
    while(n--){

        cin>>s;

        if(s.size()<m) continue;
        if(umap.find(s)!=umap.end()){
            umap[s]++;
            continue;
        }

        umap[s]=0;
        vs.push_back(s);
    }

    sort(vs.begin(),vs.end(),cmp);
    for(auto k : vs) cout<< k <<'\n';
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