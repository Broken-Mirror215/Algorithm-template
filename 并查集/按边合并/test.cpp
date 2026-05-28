#include <bits/stdc++.h>
using namespace std;

struct DSU {
    vector<int> fa;
    vector<int> siz;

    DSU(int n = 0) {
        init(n);
    }

    void init(int n) {
        fa.resize(n + 1);
        siz.assign(n + 1, 1);

        for (int i = 1; i <= n; i++) {
            fa[i] = i;
        }
    }

    int find(int x) {
        if (fa[x] == x) return x;
        return fa[x] = find(fa[x]);
    }

    bool merge(int x, int y) {
        int fx = find(x);
        int fy = find(y);

        if (fx == fy) return false;

        if (siz[fx] > siz[fy]) {
            swap(fx, fy);
        }

        fa[fx] = fy;
        siz[fy] += siz[fx];

        return true;
    }

    bool same(int x, int y) {
        return find(x) == find(y);
    }

    int size(int x) {
        return siz[find(x)];
    }
};