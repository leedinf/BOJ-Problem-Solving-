#include <iostream>
#include <cstring>
#include <cstdlib>
#include <deque>
#include <queue>
#include <stack>
#include <map>
#include <unordered_map>
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
ll x,y,z;
vector<ll> arr;
bool bo[2187][2187];
void wornl(int q,int w,int size){
    if(size==1) return;
    int b; 
    b=size/3;
    for(int i=q+b;i<q+b*2;i++){
        for(int j=w+b;j<w+b*2;j++){
            bo[i][j]=0;
        }
    }
    wornl(q,w,b);
    wornl(q+b,w,b);
    wornl(q+2*b,w,b);
    wornl(q,w+b,b);
    wornl(q,w+2*b,b);
    wornl(q+b,w+2*b,b);
    wornl(q+2*b,w+b,b);
    wornl(q+2*b,w+2*b,b);
}
void solve() {
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            bo[i][j]=1;
        }
    }
    wornl(0,0,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(bo[i][j]) cout<<'*';
            else cout<<' ';
        }
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