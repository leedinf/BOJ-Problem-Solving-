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
ll a,b,x,y,z;
vector<ll> arr;

void solve() {
    string s;
    cin>>s;

    cin>>n;
    int brr[26][2001]={0,};
    int ind=0;
    for(auto k : s){
        if(ind>0)brr[k-'a'][ind]=brr[k-'a'][ind-1]+1;
        else brr[k-'a'][ind]++;
        for(int j=0;j<26;j++){
            if((k-'a')!=j){
                if(ind>0)brr[j][ind]=brr[j][ind-1];
            }
        }
        ind++;
    }
    
    while(n--){
        char c;
        cin>>c>>a>>b;
        int k=c-'a';
        if(a==0) cout<<brr[k][b]<<"\n";
        else cout<<brr[k][b]-brr[k][a-1]<<'\n';
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