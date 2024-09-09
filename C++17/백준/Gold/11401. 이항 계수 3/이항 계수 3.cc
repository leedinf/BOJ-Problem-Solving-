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
//AB^-1 %P = AB^(P-2) %P
//nCr = n!/r!(n-r)! = n! * (r!(n-r)!)^(P-2) %P
ll mod = 1000000007;
ll n, m, cc;
vector<ll> arr;
ll Div(int a,int b){
    //a의 b승
    if(b==0) return 1;
    if(b==1) return a;
    ll k;
    if(b%2==0){
        k= Div(a,b/2);
        return (k)*(k)%mod;
    }
    else {
        k= Div(a,b/2);
        return (((k)*(k)%mod)*a)%mod;
    }
}
ll fact(int k){
    ll f=1;
    for(int i=k;i>1;i--){
        f= (f*i)%mod;
    }
    return f;
}
void solve() {
    ll r;
    cin>>n>>r;
    //nCr = n!/r!(n-r)! = n! * (r!(n-r)!)^(P-2) %P
    cout<<( fact(n) * Div((fact(r)%mod) * (fact(n-r)%mod) %mod,mod-2) ) %mod;
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