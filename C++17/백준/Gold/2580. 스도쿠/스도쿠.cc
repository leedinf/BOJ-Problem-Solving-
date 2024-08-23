#include <iostream>
#include <cstring>
#include <cstdlib>
#include <deque>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
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
ll a,b,c,x,y,z=0;
set<int> sq[9];
set<int> lo[9];
set<int> col[9];
int arr[9][9];
bool check(int a,int b,int c){
    if(lo[b].find(c)!=lo[b].end()) return 0;
    if(col[a].find(c)!=col[a].end()) return 0;
    if(sq[3*(b/3)+(a/3)].find(c)!=sq[3*(b/3)+(a/3)].end()) return 0;
    return 1;
}
void print(){
    for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cout<<arr[i][j]<<' ';
            }
            cout<<'\n';
        }
    z=1;
}
void f(int b, int a){
    if(z) return;
    if(a==9){
        a=0;
        b++;
        if(b==9){
            print();
            return;
        }
    }

    if(arr[b][a] != 0 ) return f(b,a+1);
    for(int k=1;k<=9;k++){
        if(check(a,b,k)){

            arr[b][a]=k;
            lo[b].insert(k);
            col[a].insert(k);
            sq[3*(b/3) + (a/3)].insert(k);

            f(b,a+1);

            arr[b][a]=0;
            lo[b].erase(k);
            col[a].erase(k);
            sq[3*(b/3) + (a/3)].erase(k);
        }
    }
}
void solve() {
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>arr[i][j];
            if(arr[i][j] != 0){
                lo[i].insert(arr[i][j]);
                col[j].insert(arr[i][j]);
                sq[3*(i/3)+(j/3)].insert(arr[i][j]);
            }
        }
    }
    f(0,0);


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