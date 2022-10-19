/**
 * @file main.cpp
 * @author 南　李玖
 * @date 2022-10-08
 * @brief ICPC　過去問題
 * @see http://icpc.iisf.or.jp/past-icpc/domestic2006/contest/all_ja.html
 * @copyright Copyright (c) 2022 MINAMI RIKU
 * 
 */
#include <iostream>
#include <vector>

#include "dom2006a/dom2006a.h"

using std::cout;
using std::endl;
using std::cin;
using std::vector;

/**
 * @brief テストケースを入力し、問題を解き出力する。
 * 
 * @return int 
 */
int main() {
    // テストケース数
    int T = 12;
    // 問題のテストケース入力
    int a, d, n;
    // 解答を格納しておく配列
    vector<int> res;
    // テストケースの数繰り返す。
    for (int i = 0; i < T; i++) {
        cin >> a >> d >> n;
        // 関数を用いて問題を時、配列に格納する。
        res.push_back(dom2006a::dirichlet(a, d, n));
    }
    // 解答の出力
    for (int i : res) {
        // 各テストケースに対する解答を出力する。
        cout << i << endl;
    }
    return 0;
}
