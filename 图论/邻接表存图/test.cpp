#include <bits/stdc++.h>
using namespace std;

#define int long long

struct Edge {
    int to; // 终点
    int w;  // 边权
};

signed main() {
    int n, m;
    cin >> n >> m;

    vector<vector<Edge>> g(n + 1);

    for (int i = 1; i <= m; i++) {
        int u, v, w;
        cin >> u >> v >> w;

        // 有向边 u -> v
        g[u].push_back({v, w});

        // 如果是无向边，再加这一句
        // g[v].push_back({u, w});
    }

    // 遍历 u 的所有出边
    int u = 1;
    for (auto e : g[u]) {
        cout << "from " << u << " to " << e.to << " weight " << e.w << endl;
    }

    return 0;
}