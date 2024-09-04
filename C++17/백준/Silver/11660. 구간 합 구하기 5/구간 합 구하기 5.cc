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
ll a,b,c,x,y,z;
vector<ll> arr;

void solve() {
    cin>>n>>m;
    int cal[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>cal[i][j];
        }
    }
    int sum[n][n]={0,};
    for(int i=0;i<n;i++){
        sum[i][0]=cal[i][0];
        for(int j=1;j<n;j++){
            sum[i][j]=sum[i][j-1]+cal[i][j];
        }
    }
    int s;
    int d;
    for(int t=0;t<m;t++){
        s=0;
        cin>>b>>a>>d>>c;
        a--;b--;c--;d--;
        if(b<d){
            for(int i=b;i<=d;i++){
                if(a<c){
                    if(a>0)s+=sum[i][c]-sum[i][a-1];
                    else s+=sum[i][c];
                }
                else{
                    if(c>0) s+=sum[i][a]-sum[i][c-1];
                    else s+=sum[i][a];
                }
            }

        }
        else{
            for(int i=d;i<=b;i++){
                if(a<c){
                    if(a>0)s+=sum[i][c]-sum[i][a-1];
                    else s+=sum[i][c];
                }
                else{
                    if(c>0) s+=sum[i][a]-sum[i][c-1];
                    else s+=sum[i][a];
                }
            }
        }
        cout<<s<<'\n';
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