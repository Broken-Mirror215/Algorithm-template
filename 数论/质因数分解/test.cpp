#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;

void factor(int n) {
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            mp[i]++;
            n /= i;
        }
    }

    if (n > 1) {
        mp[n]++;
    }
}