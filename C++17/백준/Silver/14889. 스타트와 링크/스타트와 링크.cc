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
ll a, b, c, x, y, z;
int q[10];
int w[10];
int check[20]={0,};
int arr[20][20];

int sum=mod;
void cal();
void wornl(int depth, int next){
    if(depth == n/2){
        cal();
        return;
    }

    for(int i=next;i<n;i++){
        q[depth]= i;
        wornl(depth+1, i+1);
    }
}
void cal(){
    for(int i=0;i<n;i++){
        check[i]=0;
    }
    for(int i=0;i<n/2;i++){
        check[q[i]]=1;
    }
    int ind=0;
    for(int i=0;i<n;i++){
        if(check[i]==0) w[ind++]=i;
    }

    int s1=0,s2=0;
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n/2;j++){
            s1+=arr[q[i]][q[j]];
        }
    }
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n/2;j++){
            s2+=arr[w[i]][w[j]];
        }
    }
    // cout<<sum<<'\n';
    sum=min(sum,abs(s1-s2));
}
void solve()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    wornl(0,0);

    cout<<sum;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // cin >> cc;
    cc = 1;
    for (int i = 0; i < cc; i++)
    {
        solve();
    }

    return 0;
}