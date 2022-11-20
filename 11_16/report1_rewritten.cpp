/** @file	report1_rewritten.cpp - report1.cppを改善したファイル
* @see	http://icpc.iisf.or.jp/past-icpc/domestic2013/#section_A
* @author	北嶋　暁
* @author 	南　李玖
* @copyright	Copyright 2022 MINAMI Riku,KITAJIMA Akira
* @date	2022年11月　新規作成
* @date	2022年11月	修正
*/
#include <algorithm>
#include <iostream>

/** 縦横それぞれ二乗し、加算した値を返します。(長方形の対角線の二乗)
* @param h	高さ
* @param w	幅
* @returns	h,wそれぞれ二乗して加算した値
*/
int pow2HW(int h, int w) {
	return(h*h + w*w);
}

/** 入力されたHとWから最適な長方形を求めます。
* @param H	高さ
* @param W	幅
* @returns	問題に沿った最適な長方形のペア
*/
std::pair<int, int> calculate(const int H, const int W) {
	const int HEIGHT_MAX = 150;  // 高さの最大
	const int HEIGHT_MIN = 1;  // 高さの最小
	const int WIDTH_MAX = 150;  // 横の長さの最大
	const int WIDTH_MIN = 1;  // 横の長さの最小

	// テストケースから与えられた長方形のデータ
	const std::pair<int, int> given(pow2HW(H, W), H);
	// 最大の長さである長方形データ
	std::pair<int, int> best(pow2HW(HEIGHT_MAX, WIDTH_MAX), HEIGHT_MAX);
	std::pair<int, int> ans;  // 最適解の高さと長さのペアー
	for(int h = HEIGHT_MIN; h <= HEIGHT_MAX; ++h) {
		for(int w = WIDTH_MIN; w <= WIDTH_MAX; ++w) {
			if(w <= h)continue;
			// --------------------------
			// 幅の方が長い長方形を扱う
			std::pair<int, int> x(pow2HW(h, w), h);
			// pair<int, int>による比較
			if(given < x && x < best) {
				best = x;
				ans = std::make_pair(h, w);
			}
		}
	}
	return ans;
}

/** テストケースからの入力H,Wを受け取り、問題に沿って最適な長方形を求め、出力する
*/
int main() {
	int H;  // 高さ(=Height)
	int W;  // 横の長さ(=Width)
	while(std::cin >> H >> W && H > 0) {
		// 計算部分(開始)
		// 最適な長方形のペア
		std::pair<int, int> ans = calculate(H, W);
		// 計算部分(終了)
		std::cout << ans.first << ' ' << ans.second << std::endl;
	}
}
