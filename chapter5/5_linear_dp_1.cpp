// 数字三角形
// 题目： 898

#include <iostream>
#include <algorithm>

using namespace std;

const int N=510,INF=0x3f3f3f3f;
int f[N][N];
int a[N][N];

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cin>>a[i][j];
        }
    }

    for(int i=1;i<=n;i++){             
        for(int j=0;j<=i+1;j++){          //因为有负数，所以应该将两边也设为-INF
            f[i][j]=-INF;
        }
    }

    f[1][1]=a[1][1];
    for(int i=2;i<=n;i++){
        for(int j=1;j<=i;j++){
            f[i][j]=a[i][j]+max(f[i-1][j-1],f[i-1][j]);
        }
    }

    int res=-INF;
    for(int i=1;i<=n;i++) res=max(res,f[n][i]);
    cout<<res<<endl;
}