// 状态压缩
// 题目：291

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 12, M = 1 << N;
int st[M];
long long f[N][M];


int main(){
    int n, m;
    while (cin >> n >> m && (n || m)){

        for (int i = 0; i < 1 << n; i ++){
            int cnt = 0;
            st[i] = true;
            for (int j = 0; j < n; j ++)
                if (i >> j & 1){
                    if (cnt & 1) st[i] = false; // cnt 为当前已经存在多少个连续的0
                    cnt = 0;
                }
                else cnt ++;
            if (cnt & 1) st[i] = false; // 扫完后要判断一下最后一段有多少个连续的0
        }

        memset(f, 0, sizeof f);
        f[0][0] = 1;
        for (int i = 1; i <= m; i ++)
            for (int j = 0; j < 1 << n; j ++)
                for (int k = 0; k < 1 << n; k ++)
                    if ((j & k) == 0 && (st[j | k])) 
                    // j & k == 0 表示 i 列和 i - 1列同一行不同时捅出来
                    // st[j | k] == 1 表示 在 i 列状态 j， i - 1 列状态 k 的情况下是合法的.
                        f[i][j] += f[i - 1][k];      
        cout << f[m][0] << endl;
    }
    return 0;
}