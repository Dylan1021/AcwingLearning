// 石子合并
// 题目：282
#include <iostream>

using namespace std;

const int N = 307;

int a[N], s[N];
int f[N][N];

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i ++) {
        cin >> a[i];
        s[i] += s[i - 1] + a[i];
    }

    // 区间 DP 枚举套路：长度+左端点 
    for (int len = 1; len < n; len ++) { // len表示i和j堆下标的差值
        for (int i = 1; i + len <= n; i ++) {
            int j = i + len; // 自动得到右端点
            f[i][j] = 1e8;
            for (int k = i; k <= j - 1; k ++) { // 必须满足k + 1 <= j
                f[i][j] = min(f[i][j], f[i][k] + f[k + 1][j] + s[j] - s[i - 1]);
            }
        }
    }

    cout << f[1][n] << endl;


    return 0;
}#include <iostream>

using namespace std;

const int N = 307;

int a[N], s[N];
int f[N][N];

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i ++) {
        cin >> a[i];
        s[i] += s[i - 1] + a[i];
    }

    // 区间 DP 枚举套路：长度+左端点 
    for (int len = 1; len < n; len ++) { // len表示i和j堆下标的差值
        for (int i = 1; i + len <= n; i ++) {
            int j = i + len; // 自动得到右端点
            f[i][j] = 1e8;
            for (int k = i; k <= j - 1; k ++) { // 必须满足k + 1 <= j
                f[i][j] = min(f[i][j], f[i][k] + f[k + 1][j] + s[j] - s[i - 1]);
            }
        }
    }

    cout << f[1][n] << endl;


    return 0;
}