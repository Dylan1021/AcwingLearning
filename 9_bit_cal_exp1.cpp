#include <iostream>
#include <string.h>
// n的二进制表示种第k位是？

using namespace std;

int main()
{
    int n = 10;

    for (int k = 3; k >= 0; k--)
        cout << (n >> k & 1);

    return 0;
}
