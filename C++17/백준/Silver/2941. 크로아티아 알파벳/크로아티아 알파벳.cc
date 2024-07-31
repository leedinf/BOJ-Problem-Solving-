#include <iostream>
#include <cstring>
#include <cstdlib>
#include <deque>
#include <queue>
#include <map>
#include <vector>
#include <list>
#include <cmath>
#include <math.h>
#include <algorithm>


using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

ll n, m, cc;
int a,b;
vector<ll> arr;

void solve() {
    string s;
    cin>>s;
    int sum=0;
    int f=0;
    int cnt=0;
    string c[8]={"c=","c-","dz=","d-","lj","nj","s=","z="};
    for(int i=0;i<s.length();i++){
        for(int k=0;k<8;k++){
            for(int j=0;j<c[k].length();j++){
                if(i+j>=s.length()) break;
                if(s[i+j] != c[k][j])break;
                if(j==c[k].length()-1){
                    sum++;
                    cnt+=c[k].length();
                    f=1;
                    i=i+j;
                    //cout<<c[k]<<'\n';
                }
            }
            if(f) break;
        }
        f=0;
    }
    cout<<sum+s.length()-cnt;
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