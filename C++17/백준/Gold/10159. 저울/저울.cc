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

vector<vector<ll>> arr;
vector<vector<ll>> arr2;
vector<ll> vs;
vector<ll> C;

ll dfs(ll x){
    
    if(vs[x]) return 0;
    vs[x]=1;
    for(auto k: arr[x]){
        dfs(k);
    }
    return 0;
}
ll dfs2(ll x){
    if(vs[x]) return 0;
    vs[x]=1;
    for(auto k: arr2[x]){
        dfs2(k);
    }
    
    return 0;
}
void solve() {
    cin>>n;
    cin>>m;
    int a,b;
    C.resize(n+1,0);
    arr.resize(n+1);
    arr2.resize(n+1);
    vs.resize(n+1,0);
    

    for(int i=0;i<m;i++){
        cin>>a>>b;
        arr[b].push_back(a);
        arr2[a].push_back(b);
    }
    ll k=0;
    for(int i=0;i<n;i++){
        dfs(i+1);
        vs[i+1]=0;
        dfs2(i+1);
        for(int j=0;j<n;j++){
            if(vs[j+1]==0) C[i+1]++;
        }
        for(int j=1;j<=n;j++){
            vs[j]=0;
        }
    }
    
    // for(int i=0;i<n;i++){
    //     cout<<C[i+1]-1<<'\n';
    // }

    // for(int i=0;i<n;i++){
    //     cout<<C2[i+1]-1<<'\n';
    // }
    for(int i=0;i<n;i++){
        cout<<C[i+1]<<'\n';
    }
}


int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int tc = 1;
	//cin >> tc;
	while (tc--) solve();
	return 0;
}