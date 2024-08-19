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

int fibo[3000000];
int cnt=0;

void merge(int p,int q,int r){
    int tmp[r-p+1];

    int i=p,j = q+1,t=0;
    while(i<=q && j<=r){
        if(arr[i]<arr[j]){
            tmp[t++]=arr[i++];
        }
        else{
            tmp[t++]=arr[j++];
        }
    }
    while(i<=q){
        tmp[t++]=arr[i++];
    }
    while(j<=r){
        tmp[t++]=arr[j++];
    }
    for(i=p;i<=r;i++){
        arr[i]=tmp[i-p];
        cnt++;
        if(cnt==m){
            cout<<arr[i];
        }
    }
}
void merge_sort(int p,int r){
    if(p<r){
        int q = (p+r)/2;
        merge_sort(p,q);
        merge_sort(q+1,r);
        merge(p,q,r);
    }
}


void solve() {
    cin>>n>>m;

    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }

    merge_sort(0,arr.size()-1);
    if(cnt<m) cout<<-1;
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