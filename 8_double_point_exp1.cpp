#include <iostream>
#include <string.h>

using namespace std;
// 输入：adf adf adf ->
// 输出：adf
//      adf
//      adf
int main()
{
    char str[1000];

    gets(str);

    int n = strlen(str);

    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j < n && str[j] != ' ')
            j++;

        for (int k = i; k < j; k++)
            cout << str[k];

        cout << endl;

        i = j;
    }
    return 0
}