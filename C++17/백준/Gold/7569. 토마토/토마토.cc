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

ll n, m;
int arr[101][101][101];
int vs[101][101][101];

typedef struct{
    int a,b,c;
    int day;
}p;

queue<p> q;
void solve() {
    int x;
    ll h;
    int sum;
    cin>>m>>n>>h;
    sum = m*n*h;
    p tmp;
    for(int i=0;i<h;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                cin>>x;
                arr[i][j][k] = x;
                vs[i][j][k]=0;
                if(x == -1) sum--;

                
                if(x == 1){
                    tmp.a = i;
                    tmp.b = j;
                    tmp.c = k;
                    tmp.day = 0;
                    sum--;
                    q.push(tmp);
                }

            }
        }
    }
    int dday = 0;
    while(!q.empty()){
        tmp = q.front();
        q.pop();
        int a,b,c,day;
        a = tmp.a;
        b = tmp.b;
        c = tmp.c;
        day =tmp.day;
        if(dday != day && dday ==day){
            cout<<day<<' '<<sum<<'\n';
            for(int i=0;i<h;i++){
                for(int j=0;j<n;j++){
                    for(int k=0;k<m;k++){
                        cout<<arr[i][j][k]<<' ';
                    }
                    cout<<'\n';
                }
                // cout<<'\n';
            }
            dday =day;
        }

        if(a+1 < h && arr[a+1][b][c] == 0){
            tmp.a = a+1;
            tmp.b = b;
            tmp.c = c;
            tmp.day = day+1; 
            q.push(tmp);

            arr[a+1][b][c] = 1;
            sum--;
        }
        if(a-1 >= 0 && arr[a-1][b][c] == 0){
            tmp.a = a-1;
            tmp.b = b;
            tmp.c = c;
            tmp.day = day+1; 
            q.push(tmp);
            arr[a-1][b][c] = 1;
            sum--;
        }
        if(b+1 < n && arr[a][b+1][c] == 0){
            tmp.a = a;
            tmp.b = b+1;
            tmp.c = c;
            tmp.day = day+1; 
            q.push(tmp);
            arr[a][b+1][c] = 1;
            sum--;
        }
        if(b-1 >=0 && arr[a][b-1][c] == 0){
            tmp.a = a;
            tmp.b = b-1;
            tmp.c = c;
            tmp.day = day+1; 
            q.push(tmp);
            arr[a][b-1][c] = 1;
            sum--;
        }
        if(c+1 < m && arr[a][b][c+1] == 0){
            tmp.a = a;
            tmp.b = b;
            tmp.c = c+1;
            tmp.day = day+1; 
            q.push(tmp);
            arr[a][b][c+1] = 1;
            sum--;
        }
        if(c-1 >=0 && arr[a][b][c-1] == 0){
            tmp.a = a;
            tmp.b = b;
            tmp.c = c-1;
            tmp.day = day+1; 
            q.push(tmp);
            arr[a][b][c-1] = 1;
            sum--;
        }
        if(sum==0){
            cout<<tmp.day;
            return;
        }
    }
    cout<<-1;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int cc = 1;
    // cin >> cc;
    for (int i = 0; i < cc; i++) {
        solve();
    }

    return 0;
}