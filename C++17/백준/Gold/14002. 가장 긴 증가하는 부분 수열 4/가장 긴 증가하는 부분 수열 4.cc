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

vector<ll> dp;
vector<ll> arr;
vector<ll> d(1000001,0);
vector<ll> dd(1000001,0);
void solve() {
    cin>>n;

    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        arr.push_back(x);
    }
    for(int i=0;i<n;i++){
        //앞에거 탐색해서 나보다 작은 것들 중 가장 높은 dp값
        int a = lower_bound(dp.begin(),dp.end(),arr[i]) - dp.begin();
        if(a==dp.size()) {
            dp.push_back(arr[i]);
        }
        else{
            dp[a]=min(arr[i],dp[a]);
        }
        dd[i]=a;
    }
    cout<<dp.size()<<'\n';
    ll k=dp.size()-1;
    for(int i=n-1;i>=0;i--){
        if(dd[i]==k && k>=0){
            dp[k]=arr[i];
            k--;
        }
    }
    for(int i=0;i<dp.size();i++){
        cout<<dp[i]<<' ';
    }
}


int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int tc = 1;
	//cin >> tc;
	while (tc--) solve();

    

	return 0;


}