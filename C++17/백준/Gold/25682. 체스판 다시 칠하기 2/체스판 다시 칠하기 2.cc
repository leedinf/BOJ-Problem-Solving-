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

int arr[2001][2001];
void solve()
{
    int k;
    cin >> n >> m >> k;
    char q;
    int brr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>q;
            if (q == 'B')
                brr[i][j] = 0;
            else
                brr[i][j] = 1;
        }
    }

    // int crr[n][m];
    // t==0 bwbw 0101 <<<
    // t==1 wbwb 1010
    // 111011101110
    // 101010101010 3
    // 010101010101 9
    // 0,0 0,1 0,2
    // 1,0 1,1 1,2
    // 2,0 2,1 2,2
    int t = 0;
    for (int i = 0; i < n; i++)//첫 열
    {
        if ((i) % 2 == 0)
        {
            if(brr[i][0]==1)arr[i][0]=1;
            else arr[i][0]=0;
        }
        else
        {
            if(brr[i][0]==1)arr[i][0]=0;
            else arr[i][0]=1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if ((i + j) % 2 == 0)
            {
                if (brr[i][j] == 0)
                    arr[i][j] = arr[i][j - 1];
                else
                    arr[i][j] = arr[i][j - 1] + 1;
            }
            else
            {
                if (brr[i][j] == 0)
                    arr[i][j] = arr[i][j - 1] + 1;
                else
                    arr[i][j] = arr[i][j - 1];
            }
        }
    }
    int crr[n][m];
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            if(i==0) crr[i][j]=arr[i][j];
            else crr[i][j]=arr[i][j]+crr[i-1][j];
        }
    }
    int minsum=mod;
    int maxsum=0;
    int temp=0;
    for(int i=k-1;i<n;i++){
        for(int j=k-1;j<m;j++){
            if(i-k>=0 && j-k>=0) temp += crr[i-k][j-k];
            temp+=crr[i][j];
            if(i-k>=0){
                temp-=crr[i-k][j];
            }

            if(j-k>=0){
                temp-=crr[i][j-k];
            }
        minsum=min(minsum,temp);
        maxsum=max(maxsum,temp);
        temp=0;
        }
        
    }
    
    cout<<min(minsum,k*k-maxsum);
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