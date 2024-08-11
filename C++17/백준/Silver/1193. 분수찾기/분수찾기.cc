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
int a,b,x;
vector<ll> arr;
/*
1 2 6 7 15
3 5 8 14
4 9 13
10 12
11
*/
void solve() {
    cin>>n;
    x=1;
    a=1;
    int q,w;
    q=1; w=1;
    while(1){
        if(a+x>n) break;
        a+=x;
        x++;

        w++;
    }
    
    w-=(n-a);
    q+=(n-a);
    
    if(x%2 == 0) cout<<q<<'/'<<w;
    else cout<<w<<'/'<<q;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //cin >> cc;
    cc=1;
    for (int i = 0; i < cc; i++) {
        solve();
    }

    return 0;
}