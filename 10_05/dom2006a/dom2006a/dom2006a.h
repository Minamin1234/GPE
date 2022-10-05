// dom2006a.h - ディリクレの算術級数定理用ヘッダファイル
#pragma once
#ifndef DOM2006A_H_
#define DOM2007A_H_

namespace dom2006a {

// 与えられた条件で素数を求める。
//   引数
//     a 初期値
//     d 公差
//     n 何番目を求めるか
//  戻り値 
//    求める素数
int dirichlet(int a, int d, int n);

}  // namespace dom2006a

#endif  // DOM2006A_H_
