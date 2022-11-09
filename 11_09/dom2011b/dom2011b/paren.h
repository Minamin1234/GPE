/** @file paren.h @brief 世界の天秤を解くプログラムのヘッダファイル
 *
 *  Copyright 2011 Akira Kitajima
 *
 *  @author 北嶋 暁
 *  @date 2011/11/25 新規作成
 *  @date 2017/12/1 ファイル分割
 *
 *  @see http://icpc.iisf.or.jp/past-icpc/domestic2011/contest/all_ja.html
 */
#ifndef DOM2011B_PAREN_H_
#define DOM2011B_PAREN_H_

#include <string>

 /** 文字列@a s 中の括弧が対応しているかチェックする。
  * うまく対応していたら真を返す。
  * @param s 文字列
  * @return 判定結果
  */
bool match_parens(const std::string& s);

#endif  // DOM2011B_PAREN_H_
