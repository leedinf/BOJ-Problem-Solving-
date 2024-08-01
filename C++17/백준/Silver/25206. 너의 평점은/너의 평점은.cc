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
vector<ll> arr;

void solve() {
    string s;
    float k;
    float sum=0;
    float kk=0;
    for(int i=0;i<20;i++){
        cin>>s;
        cin>>k;
        cin>>s;
        if(s[0]=='P') k=k;
        else if(s[0]=='F') kk+=k;
        else{
            sum+=k*(4-(s[0]-'A'));
            kk+=k;
        }
        if(s[0]!='P' && s[1]=='+') sum+=0.5 * k;
        // cout<<sum<<'\n';
    }

    cout<<sum/kk;
    // cout<<'\n'<<sum;
    // cout<<'\n'<<kk;
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