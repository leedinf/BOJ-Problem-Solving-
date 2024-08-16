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
    cin>>n;
    deque<ll> dq;
    for(int i=0;i<n;i++){
        cin>>x;
        switch(x){
            case 1:
                cin>>x;
                dq.push_front(x);
                break;
            case 2:
                cin>>x;
                dq.push_back(x);
                break;

            case 3:
                if(!dq.empty()){
                    cout<<dq.front();
                    dq.pop_front();
                }
                else cout<<-1;
                    cout<<'\n';
                break;

            case 4:
                if(!dq.empty()){
                    cout<<dq.back();
                    dq.pop_back();
                }
                else cout<<-1;
                    cout<<'\n';
                break;

            case 5:
                cout<<dq.size();
                cout<<'\n';
                break;

            case 6:
                if(dq.empty()) cout<<1;
                else cout<<0;
                cout<<'\n';
                break;

            case 7:
                if(!dq.empty()) cout<<dq.front();
                else cout<<-1;
                cout<<'\n';
                break;

            case 8:
                if(!dq.empty()) cout<<dq.back();
                else cout<<-1;
                cout<<'\n';
                break;

        }
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