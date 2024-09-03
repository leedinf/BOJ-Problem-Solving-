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
int w[51][51][51];

void solve() {
    
    for(int i=0;i<51;i++){
        for(int j=0;j<51;j++){
            w[i][j][0]=1;
            w[0][i][j]=1;
            w[i][0][j]=1;
        }
    }
    int z=3;
    while(z--){
    for(int i=1;i<21;i++){
        for(int j=1;j<21;j++){
            for(int k=1;k<21;k++){
                if(i<j && j<k) w[i][j][k]=w[i][j][k-1]+w[i][j-1][k-1]-w[i][j-1][k]; 
                else w[i][j][k]=w[i-1][j][k]+w[i-1][j-1][k]+w[i-1][j][k-1]-w[i-1][j-1][k-1];
            }
        }
    }

    }

    while(1){
        cin>>a>>b>>c;
        if(a==-1 && b==-1 && c==-1 )break;
        if(a<=0 || b<=0 || c<=0){
            printf("w(%d, %d, %d) = %d\n",a,b,c,1);

            continue;
        }
        else if(a>20 || b>20 || c>20){
            printf("w(%d, %d, %d) = %d\n",a,b,c,w[20][20][20]);

            continue;
        }
        // cout<<w[a][b][c]<<'\n';
        printf("w(%d, %d, %d) = %d\n",a,b,c,w[a][b][c]);
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