// dom2007a.cpp - ACM ICPC2007国内予選A ICPC得点集計ソフトウェア
// グループプログラミング演習 演習課題1 (応用課題)

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

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
        min_val = min(min_val, s);
        max_val = max(max_val, s);
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

/// @brief 1セットのデータ入力に対して解答します。
/// @return そのデータセットに対する解答
int solve()
{
    int n;
    int p;
    cin >> n;
    cin >> p;
    ScoreTotalizer score(p);
    score.update(p);
    for(int i = 0;i < n-1;i++)
    {
        cin >> p;
        score.update(p);
    }
    return score.calc_result();
}

int main() {
    // *** 以下の部分を作成してください。 ***
    vector<int> res;
    int n = 4;
    for(int i = 0;i < n;i++)
    {
        res.push_back(solve());
    }

    cout << endl;
    for(auto i : res)
    {
        cout << i << endl;
    }
    return 0;
}
