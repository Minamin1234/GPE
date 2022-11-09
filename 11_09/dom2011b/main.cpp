/** @file main.cpp @brief 世界の天秤を解くプログラムのメイン部分
 *
 *  Copyright 2011 Akira Kitajima
 *
 *  @author 北嶋 暁
 *  @date 2011/11/25 新規作成
 *  @date 2017/12/1 ファイル分割
 *
 *  @see http://icpc.iisf.or.jp/past-icpc/domestic2011/contest/all_ja.html
 */
#include <iostream>
#include <string>
#include "dom2011b/paren.h"
using namespace std;

/** 標準入力からデータを得て標準出力に結果を出力する。
 * @return 終了ステータス
 */
int main() {
	for (;;) {
		// データを得る。
		string s;  // 与えられた文字列
		getline(cin, s);
		if (s == ".")  // 入力の終わり
			break;

		// 結果を出力する。

		cout << (match_parens(s) ? "yes" : "no") << endl;
	}
	return 0;
}
