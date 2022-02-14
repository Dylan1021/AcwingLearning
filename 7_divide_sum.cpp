#include <iostream>

using namespace std;

const int N = 10010;

int n, m;
int a[N], b[N];

void insert(int l, int r, int c)
{
    b[l] += c;
    b[r + 1] -= c;
}

int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        b[i] += b[i - 1];
    for (int i = 1; i <= n; i++)
        printf("%d", b[i]);
    return 0;
}