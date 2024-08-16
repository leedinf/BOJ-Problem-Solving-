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
vector<ll> arr;

void solve() {
    int brr[8001]= {0,};
    cin>>n;
    m=n;
    double sum=0;
    bool flag=0;
    while(m--){
        cin>>x;
        brr[x+4000]++;
        sum+=x;
        arr.push_back(x);
    }
    int k=0;
    int t=0;
    for(int i=0;i<8001;i++){
        if(k<brr[i]){
            k=brr[i];
            t=i-4000;
            flag=0;
        }
        else if(k==brr[i]){
            if(!flag){
                k=brr[i];
                t=i-4000;
                flag=1;
            }
        }
    }
    if(round(sum/n)==-0) cout<<0<<'\n';
    else cout<<round(sum/n)<<'\n';
    sort(arr.begin(),arr.end());
    cout<<arr[n/2]<<'\n';
    cout<<t<<'\n';
    cout<<arr[n-1]-arr[0];
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