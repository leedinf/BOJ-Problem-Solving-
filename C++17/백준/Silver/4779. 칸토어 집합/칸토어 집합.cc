#include <iostream>
#include <cstring>
#include <cstdlib>
#include <deque>
#include <queue>
#include <stack>
#include <map>
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
string s;
void make(ll k){
    s=s+s+s;
}
void wornl(ll q,ll w){
    if(w-q==1) return;
    for(int i=q+(w-q)/3;i<w-(w-q)/3;i++) s[i]=' ';
    wornl(q,q+(w-q)/3);
    wornl(w-(w-q)/3,w);
}
void solve() {
    ll x=1;
    for(int i=0;i<n;i++){
        x*=3;
    }
    s='-';
    for(int i=0;i<n;i++) make(x);
    wornl(0,s.size());
    cout<<s<<'\n';
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    while(cin>>n && n>=0) solve();

    return 0;
}

//---------------------------
//---------------------------