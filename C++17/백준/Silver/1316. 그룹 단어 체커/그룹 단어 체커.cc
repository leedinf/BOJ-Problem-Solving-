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
    int c[26]={0,};
    for(int i=0;i<26;i++){
        c[i]=0;
    }
    int flag=0;
    char b='0';
    for(auto k:s){
        if(b==k) continue;
        if(c[k-'a'] == 0) c[k-'a']= 1;
        else flag=1;
        b=k;
    }
    if(!flag) a++;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> cc;
    //cc=1;
    a=0;
    for (int i = 0; i < cc; i++) {
        solve();
    }
    cout<<a;
    return 0;
}