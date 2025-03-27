#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
#include <map>

using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;

typedef struct{
    ll m[2][2];
}Mat;

Mat matrix_mul(Mat a, Mat b, ll mod){
    Mat c;
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            c.m[i][j] = 0;
            for (int k=0;k<2;k++){
                c.m[i][j] += a.m[i][k] * b.m[k][j];
                c.m[i][j] %= mod;
            }
        }
    }

    return c;
}
Mat matrix_pow(Mat base, ll n, ll mod){
    Mat result;
    result.m[0][0] = 1;
    result.m[0][1] = 0;
    result.m[1][0] = 0;
    result.m[1][1] = 1;
    while(n>0){
        if (n % 2 == 1){
            result = matrix_mul(result, base, mod);
        }
        base = matrix_mul(base, base, mod);
        n /= 2;
    }

    return result;
}

void solve(){
    ll n;
    cin>>n;

    ll mod = 1000000007;

    Mat base;
    base.m[0][0] = 1;
    base.m[0][1] = 1;
    base.m[1][0] = 1;
    base.m[1][1] = 0;

    Mat result = matrix_pow(base, n, mod);

    cout<<result.m[0][1]<<endl;

    return;
}
int main() {
    ios::sync_with_stdio(false);

    cin.tie(0);

    int cc = 1;

    while(cc--){
        solve();
    }
    return 0;
}