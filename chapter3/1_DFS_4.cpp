// 树和图的 DFS
// 题目：842

#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 100010, M = N*2;

int n,m;
int h[N], e[M], ne[M], idx;
bool st[N];

void add(int a, int b){
    e[idx] = b, ne[idx] = h[a], h[a] = idx ++; 
}

void dfs(int u){
    st[u] = true;

    for(int i = h[u]; i != -1 ; i = ne[i]){
        int j = e[i];
        if(!st[j]) dfs(j);
    }
}

int main(){
    memset(h, -1 , sizeof h);
}