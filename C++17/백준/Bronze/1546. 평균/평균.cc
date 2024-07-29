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

float n, m;
vector<ll> arr;
void solve() {
    cin>>n;
    float m=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m = x > m ? x : m;
        arr.push_back(x);
    }
    float s=0;
    for(auto k: arr){
        s+=k/m*100;
    }
    s/=n;
    printf("%.4f",s);
}


int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int tc = 1;
	//cin >> tc;
	while (tc--) solve();
	return 0;
}