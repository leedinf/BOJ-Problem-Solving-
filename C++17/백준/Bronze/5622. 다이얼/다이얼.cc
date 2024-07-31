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
    for(auto k: s){
        if(k!='\0'){
            k-='A';
            if(k<3) sum+=3;
            else if(k<6) sum+=4;
            else if(k<9) sum+=5;
            else if(k<12) sum+=6;
            else if(k<15) sum+=7;
            else if(k<19) sum+=8;
            else if(k<22) sum+=9;
            else if(k<26) sum+=10;
            //else sum+=11;
        }
        
    }
    cout<<sum<<'\n';
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