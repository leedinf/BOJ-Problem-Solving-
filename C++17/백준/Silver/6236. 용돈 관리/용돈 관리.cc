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

ll n, m;
vector<ll> arr;

ll check(ll t){
    ll mon=t;
    ll cnt=1;
    for(auto k: arr){
        if(mon>=k) mon-=k;
        else{
            cnt++;
            mon=t-k;
        }
    }
    return cnt;
}

void solve() {
    cin>>n>>m;
    ll q=0,k;
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>k;
        arr.push_back(k);
        sum+=k;
        q=max(q,k);
    }
    ll mid,l,r;
    l=q;
    r=sum;
    while(l<=r){
        mid=(l+r)/2;
        ll c=check(mid);
        if(c>m){
            l=mid+1;
        }
        else if(c<=m){
            r=mid-1;
        }
    }
    cout<<mid;
}




int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int tc = 1;
	//cin >> tc;
	while (tc--) solve();
	return 0;
}