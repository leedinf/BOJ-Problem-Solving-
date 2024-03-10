#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
#include<list>
#include<stack>
#include<set>
#include<map>
#include<cstdlib>

using namespace std;
using ll = long long;

vector<ll> vx(16),vy(16);
ll n, m;
ll cnt=0;
void wornl(ll y,ll x) {
    for(int i=0;i<y;i++){
        if(vx[i]==x) return;

        if(abs(vx[i]-x)==abs(vy[i]-y)) return;
    }

    if(y == n-1){
        cnt++;
        return;
    }
    vx[y]=x;
    vy[y]=y;
    for(int i=0;i<n;i++){
        wornl(y+1,i);
    }
}
void solve() {
    cin>>n;

    for(int i=0;i<n;i++){
        wornl(0,i);
    }

    cout<<cnt;
    
}


int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int tc = 1;
	//cin >> tc;
	while (tc--) solve();
	return 0;
}