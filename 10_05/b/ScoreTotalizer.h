// ScoreTotalizer.h - ACM ICPC2007国内予選A ICPC得点集計ソフトウェアのクラス
// グループプログラミング演習 演習課題2 (応用課題)
#pragma once
#ifndef SCORETOTALIZER_H_
#define SCORETOTALIZER_H_

#include <algorithm>

// スコア計算するクラス
class ScoreTotalizer {
public:
    // スコアの最高値を指定して初期化する。(コンストラクタ)
    // 引数
    //   max_score スコアの最高値
    ScoreTotalizer(int max_score) :
        n(0),
        min_val(max_score),
        max_val(0),
        sum(0) {
    }

    // 合計値、最小値、最大値の変数値を更新する。
    //   引数
    //     s 新しい審判の点数
    void update(int s) {
        sum += s;
        min_val = std::min(min_val, s);
        max_val = std::max(max_val, s);
        n++;    // データ数も数えておく。
    }

    // 現在のデータをもとに平均スコアを計算する。
    //   戻り値  計算した得点
    int calc_result() const {
        return (sum - min_val - max_val) / (n - 2);
    }

private:
    int n;			// 人数 (データ数)
    int min_val;    // 最小点
    int max_val;	// 最大点
    int sum;		// 合計点
};

#endif // SCORETOTALIZER_H_
