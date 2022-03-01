#include <iostream>

//求二进制中 1 的个数,题目801
// 5
// 1 2 3 4 5 ->
// 1 1 2 1 2
using namespace std;

int lowbit(int x){
    return x & -x;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;

        int res = 0;
        while(x) x-= lowbit(x),res ++;

        cout << res << ' ';
    }
    return 0;
}