#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
//a^b次方
int qpow(int a, int b) {
    a %= MOD;
    int res = 1;

    while (b) {
        if (b & 1) {
            res = res * a % MOD;
        }

        a = a * a % MOD;
        b >>= 1;
    }

    return res;
}