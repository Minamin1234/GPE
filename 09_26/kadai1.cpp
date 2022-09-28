#include <iostream>
#include <algorithm>
#include <vector>

/// @brief 合計値、最小値、最大値の変数値を更新する。
/// @param sum 合計値(更新)
/// @param min_val 最小値(更新)
/// @param max_val 最大値(更新)
/// @param s 新しい審判の点数
void update(int &sum,int &min_val,int &max_val,int s)
{
    sum += s;
    min_val = std::min(min_val,s);
    max_val = std::max(max_val,s);
}

/// @brief データ数、合計値、最小値を基に、得点を計算する。
/// @param n データ数
/// @param sum 合計値
/// @param min_val 最小値
/// @param max_val 最大値
/// @return 計算した得点
int calc_result(int n,int sum,int min_val,int max_val)
{
    return (sum - min_val - max_val) / (n - 2);
}

/// @brief １セットの入力ケースに対して計算します。
/// @return 答え
int solve()
{
    int n,p;                   //n: データ数 p: i番目の得点
    int sum = 0;               //点数の合計
    int max = 0;               //点数の最大値
    int min = 0;               //点数の最小値
    std::cin >> n;             //データ数を受け取る
    std::cin >> min;           //一つ目のデータを最小値とする
    update(sum,min,max,min);   //取得した点数から最小値最大値を更新する
    for(int i = 0;i < n-1;i++)//[データ数]-1回繰り返す
    {
        std::cin >> p;         //点数を取得する
        update(sum,min,max,p); //取得した点数から最小値最大値を更新する
    }

    return calc_result(n,sum,min,max);
}

int main()
{
    int n = 4;            //テストケース数
    std::vector<int> res; //答えの配列
    for(int i = 0;i < n;i++)
    {
        res.push_back(solve());
    }

    //答えの出力処理
    std::cout << std::endl;
    for(auto i : res)
    {
        std::cout << i << std::endl;
    }
    return 0;
}