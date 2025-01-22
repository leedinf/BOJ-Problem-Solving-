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

//AB^-1 %P = AB^(P-2) %P


using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

ll mod = 1000000007;
ll n, m, cc;
ll a,b,c,x,y,z;
vector<ll> arr;

typedef struct A{
    int a,b,c;
    int rank;
    int num;
}A;

bool cmp(A a, A b){
    if(a.a > b.a){
        return true;
    }
    if(a.a == b.a){
        if(a.b > b.b){
            return true;
        }
        if(a.b == b.b){
            if(a.c > b.c){
                return true;
            }
            else return false;
        }
        else return false;
    }
    if(a.a < b.a) return false;
}
void solve() {
    cin>>n >> m;
    vector<A> arr;
    A k;
    for(int i=0;i<n;i++){
        cin>>k.num;
        cin>>k.a>>k.b>>k.c;
        arr.push_back(k);
    }
    sort(arr.begin(), arr.end(), cmp);

    arr[0].rank = 1;
    int idx=0;
    for(int i=0;i<n-1;i++){
        // cout<<arr[i].a<<' '<<arr[i].b<<' '<<arr[i].c<<'\n';
        if(m==arr[i].num) idx = i;
        if(cmp(arr[i],arr[i+1])){
            arr[i+1].rank = arr[i].rank+1;
        }
        else arr[i+1].rank = arr[i].rank;
    }

    cout<<arr[idx].rank;
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