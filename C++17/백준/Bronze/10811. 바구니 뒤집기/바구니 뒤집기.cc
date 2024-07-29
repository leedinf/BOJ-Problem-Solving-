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

void solve() {
    // cin>>n;
    cin>>n>>m;
    vector<ll> arr(n);
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }

    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        for(int j=a;j<=(a+b)/2;j++){
            swap(arr[j],arr[b-j+a]);
        }
        
    }
    for(int i=0;i<n;i++){
            cout<<arr[i]<<' ';
        }
}


int main() {
	ios::sync_with_stdio(0); //cin.tie(0);
	int tc = 1;
	//cin >> tc;
	while (tc--) solve();
	return 0;
}