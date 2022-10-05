// dom2007a.cpp - ICPC得点集計ソフトウェア用関数定義
#include "dom2007a/dom2007a.h"
#include <algorithm>
using namespace std;

void dom2007a::update(int& sum, int& min_val, int& max_val, int s) {
	sum += s;
	min_val = min(min_val, s);
	max_val = max(max_val, s);
}

int dom2007a::calc_result(int n, int sum, int min_val, int max_val) {
	return (sum - min_val - max_val) / (n - 2);
}
