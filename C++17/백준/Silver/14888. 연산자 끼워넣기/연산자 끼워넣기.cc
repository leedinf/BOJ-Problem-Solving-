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
ll a,b,c,x,y,z;
int Max=-mod,Min=mod;
vector<ll> arr;
void cal(int a,int b,int c,int d,int sol,int index){
    if(index==n){
        Max=max(Max,sol);
        Min=min(Min,sol);

        return;
    }
    if(a>0) cal(a-1,b,c,d,sol+arr[index],index+1);
    if(b>0) cal(a,b-1,c,d,sol-arr[index],index+1);
    if(c>0) cal(a,b,c-1,d,sol*arr[index],index+1);
    if(d>0) cal(a,b,c,d-1,sol/arr[index],index+1);
}
void solve() {
    cin>>n;
    arr.resize(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int add,sub,mul,div;
    cin>>add>>sub>>mul>>div;

    cal(add,sub,mul,div,arr[0],1);

    cout<<Max<<'\n'<<Min;
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