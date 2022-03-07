// N 个物品，背包有 V 的容量
// 每个物品i最多用一次，体积 vi，价值 wi
// 目标：使背包价值装的物品价值最大
// 题目：2

// Dp优化：方程的等价变形

#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1010;

int n,m;
int v[N],w[N];
int f[N][N];

int main(){
    cin >> n >> m;

    for(int i = 1 ; i <= n ; i++)
        cin >> v[i] >> w[i];

    for(int i = 1 ; i <= n ; i++)
        for(int j = 0 ; j <= m ; j++){
            f[i][j] = f[i-1][j];
            if(j >= v[i]) f[i][j] = max(f[i][j], f[i-1][j - v[i]] + w[i]);
        }
    
    cout  << f[n][m] << endl;

    return 0;
}