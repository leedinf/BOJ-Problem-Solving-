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

ll mod = 1000000007;
ll n, m, cc;
ll a,b,c,x,y,z;
vector<ll> arr;

int fibo[3000000];
int cnt;
int rec(int a,int b,string* s){
    cnt++;
    if(a>=b) return 1;
    else if((*s)[a]!=(*s)[b]) return 0;
    else return rec(a+1,b-1,s);
}


void solve() {

    cin>>n;
    string s;
    while(n--){
        cnt = 0;
        cin>>s;

        cout<<rec(0,s.size()-1,&s)<<' '<<cnt;
        cout<<'\n';
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