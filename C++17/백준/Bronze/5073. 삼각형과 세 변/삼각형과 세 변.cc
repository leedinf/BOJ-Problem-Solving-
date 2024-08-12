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
ll a,b,c,x,y,z;
vector<ll> arr;

void solve() {
    while(1){

    cin>>a>>b>>c;
    
    if(a==b && b==c && a==0) return;
    if(!(a+b>c && a+c>b && b+c>a)) cout<<"Invalid";
    else if(a==b && b==c) cout<<"Equilateral";
    else{
        if(a==b || b==c || a==c) cout<<"Isosceles";
        else cout<<"Scalene";
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