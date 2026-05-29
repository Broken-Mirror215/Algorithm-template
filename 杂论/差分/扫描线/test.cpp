#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<int, int> diff;

    for (int i = 1; i <= n; i++) {
        int l, r;
        cin >> l >> r;

        diff[l] += 1;
        diff[r + 1] -= 1;
    }

    int cur = 0;
    int ans = 0;

    for (auto [pos, val] : diff) {
        cur += val;
        ans = max(ans, cur);
    }

    cout << ans << '\n';

    return 0;
}