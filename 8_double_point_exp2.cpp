#include <iostream>

using namespace std;
// 最长不重复的连续子序列,题目799
// 1 2 2 3 5 -> 2 3 5

const int N = 100010;

int n;
int a[N], s[N];

int mian(){
    cin >> n;
    for(int i = 0 ; i < n ; i ++) cin >> a[i];

    int res = 0 ;
    for(int i= 0 , j = 0 ; i < n; i++){
        s[a[i]] ++;
        while(s[a[i]] > 1){
            s[a[j]] -- ;
            j ++;
        }

        res = max(res,i -j + 1);
    }
    cout << res << endl;

    return 0;
}