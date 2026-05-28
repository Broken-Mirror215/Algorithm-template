#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct Edge {
    int u, v;   
    ll w;       
};

int main() {
    int n, m;
    cin >> n >> m;

    vector<Edge> edges;

    for (int i = 1; i <= m; i++) {
        int u, v;
        ll w;
        cin >> u >> v >> w;

        edges.push_back({u, v, w});
    }

    // 遍历所有边
    for (auto e : edges) {
        cout << e.u << " " << e.v << " " << e.w << endl;
    }

    return 0;
}