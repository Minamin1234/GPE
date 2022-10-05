// dom2006a.cpp - ディリクレの算術級数定理用関数定義
#include "dom2006a/dom2006a.h"
using namespace std;

namespace {
    // 素数かどうか判定する。
    //   引数
    //     n 判定対象の数
    //   戻り値
    //     素数であればtrue
    bool is_prime_number(int n) {
        // 場合分け (n <= 1)
        if (n <= 1)
            return false;

        // 場合分け (nが偶数)
        if (n % 2 == 0)
            return n == 2;

        // 場合分け (nが3以上の奇数)
        for (int d = 3; d * d <= n; d += 2)
            if (n % d == 0)
                // dで割り切れるので素数ではない。
                return false;

        // 割り切れる数が見つからなかったので素数
        return true;
    }
}

int dom2006a::dirichlet(int a, int d, int n) {
    int cnt = 0;  // 見つかった素数の個数

    while (!is_prime_number(a) || ++cnt < n)
        a += d;

    return a;
}
