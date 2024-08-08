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
int a,b,x;
vector<ll> arr;

void solve() {
    ll x;
    string s;
    cin>>s>>x;
    ll xx;
    xx=x;
    ll q;
    n=0;
    x=1;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]>='A' && s[i]<='Z') q=s[i]-'A'+10;
        else{
            q=s[i]-'0';
        }
        q*=x;
        n+=q;
        x*=xx;   
    }
    cout<< n;
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