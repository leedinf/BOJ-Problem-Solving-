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
stack<ll> st;

// struct cmp{
// 	bool operator()(pair<ll,ll>& a, pair<ll,ll>& b){
// 		return a.first > b.first;
// 	}//?
// };
// priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>,cmp> pq;

void solve() {
    cin>>n;
	vector<ll> arr;
	vector<ll> brr(n,-1);
	ll x;
	for(int i=0;i<n;i++){
		cin>>x;
		arr.push_back(x);
	}
	for(int i=n-1;i>=0;i--){
		while(!st.empty() && st.top() <= arr[i]){
			st.pop();
		}
		if(!st.empty()){
			brr[i]=st.top();
		}
		st.push(arr[i]);
	}

	for(int i=0;i<n;i++){
		cout<<brr[i]<<' ';
	}
	//cout<<'\n';
	//while(!pq.empty()){
		//cout<<pq.top().first<<' ';
		//pq.pop();
	//}
}


int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int tc = 1;
	//cin >> tc;
	while (tc--) solve();
	return 0;
}