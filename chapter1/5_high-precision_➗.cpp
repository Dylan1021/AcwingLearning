#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// A ➗ b
vector<int> div(vector<int> &A, int b, int &r) // r是余数
{ 
    vector<int> C;  //商
    r = 0;
    for (int i = A.size(); i >= 0; i--)
    {
        r = r * 10 + A[i];
        C.push_back(r / b);
        r %= b;
    }
    while(C.size() > 0 && C.back() == 0) C.pop_back();
    reverse(C.begin(),C.end());

    return C;
}

int main()
{
    string a;
    int b;

    cin >> a >> b;
    vector<int> A;
    for (int i = a.size() - 1; i >= 0; i--)
        A.push_back(a[i] - '0');

    int r;
    auto C = div(A, b, r);
    for (int i = C.size() - 1; i >= 0; i--)
        cout << endl
             << r << endl;

    return 0;
}