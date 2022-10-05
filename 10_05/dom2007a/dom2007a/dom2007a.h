// dom2007a.h - ICPC得点集計ソフトウェア用ヘッダファイル
#pragma once
#ifndef DOM2007A_H_
#define DOM2007A_H_

#include <algorithm>

namespace dom2007a {

// 合計値、最小値、最大値の変数値を更新する。
//   引数
//     sum     合計値 (更新)
//     min_val 最小値 (更新)
//     max_val 最大値 (更新)
//     s       新しい審判の点数
void update(int& sum, int& min_val, int& max_val, int s);

// データ数、合計値、最小値、最大値をもとに、得点を計算する。
//   引数
//     n       データ数
//     sum     合計値
//     min_val 最小値
//     max_val 最大値
//
//   戻り値  計算した得点
int calc_result(int n, int sum, int min_val, int max_val);

// ICPCの点数を集計するクラス
class score_totalizer {
public:
	// 点数の最小値・最大値を指定して初期設定を行う。
	//   引数
	//     score_min 点数の最小値
	//     score_max 点数の最大値
	score_totalizer(int score_min, int score_max) :
		n(0),
		sum(0),
		min_val(score_max),
		max_val(score_min) {
	}

	// 合計値、最小値、最大値の変数値を更新する。
	//   引数
	//     s       新しい審判の点数
	void update(int s) {
		sum += s;
		min_val = std::min(min_val, s);
		max_val = std::max(max_val, s);
		n++;
	}

	// データ数、合計値、最小値、最大値をもとに、得点を計算する。
	//   戻り値  計算した得点
	int calc_result() {
		return (sum - min_val - max_val) / (n - 2);
	}

private:
	int n;  // データ数
	int sum;  // 合計値
	int min_val;  // 最小値
	int max_val;  // 最大値
};

} // namespace dom2007a

#endif  // DOM2007A_H_
