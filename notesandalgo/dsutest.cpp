#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
const int INF = 0x3F3F3F3F;
const int MOD = 1e9+7;
const int MM = 1e5+1;
int size = 10;
int parent[size];
int findset(int u) {
    if (parent[u]==u) return u;
    else {
        parent[u] = findset(parent[u]);
    }
}

int main() {
cin.sync_with_stdio(0);
cin.tie(0);




return 0;
}