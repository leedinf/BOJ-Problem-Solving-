#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int n;
vector<vector<int>> arr;
int vs[101][101];
int cnt=0;
void dfs(int y,int x,int dep){
    if(arr[y][x]<=dep || vs[y][x]==1)return;
    vs[y][x]=1;
    // cout<<y<<' '<<x<<'\n';
    if(x+1 < n && arr[y][x+1] > dep && !vs[y][x+1]){
        dfs(y,x+1,dep);
    }
    
    if(y+1 < n && arr[y+1][x] > dep && !vs[y+1][x]){
        dfs(y+1,x,dep);
    }
    
    if(x-1 >=0&& arr[y][x-1] > dep && !vs[y][x-1]){
        dfs(y,x-1,dep);
    }
    
    if(y-1 >=0 && arr[y-1][x] > dep && !vs[y-1][x]){
        dfs(y-1,x,dep);
    }
}
int f(int dep){
    cnt=0;    
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            vs[j][k]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(vs[i][j]==0 && arr[i][j]>dep){
                dfs(i,j,dep);
                cnt++;
            }
        }
    }

    return cnt;
}
int main() {
    // Do NOT delete these lines unless you know what you are doing:
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n;
    arr.resize(n,vector<int>(n,0));
    int maxdep=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            if(maxdep < arr[i][j]) maxdep = arr[i][j];
        }
    }
    int Max = 1;
    for(int i=1;i<maxdep;i++){
        Max = max(Max,f(i));
    }
    cout<<Max;
}
