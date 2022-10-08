/**
 * @file main.cpp
 * @author 南　李玖
 * @brief ICPC 過去問題 得点集計を行う問題のメイン
 * 
 * @see http://icpc.iisf.or.jp/past-icpc/domestic2007/A_ja.html
 * 
 * @date 2022-10-08 更新
 * 
 * @copyright Copyright (c) 2022 MINAMI Riku
 * 
 */
#include <iostream>
#include "dom2007a/dom2007a.h"

#include <vector>

using namespace std;

/**
 * @brief データセットの個数回入力し、全ての入力が完了後にまとめて出力する。
 * 
 * @return int 終了コード
 */
int main()
{
    //データセット数
    int N = 4; 
    //個数と値
    int n,s;
    //出力結果を格納しておく配列
    vector<int> res;
    //データセット数の回数繰り返す
    for(int i = 0;i < N;i++)
    {
        //得点の個数の入力
        cin >> n;
        //最初の得点の入力
        cin >> s;
        //最初の得点を入力したので一つ減らす
        n--;
        //得点計算機を初期化する　初期値はデータセット最初の値
        dom2007a::score_totalizer st(s,s);
        //最初の値を入れて更新処理
        st.update(s);
        //残りの得点の数だけ繰り返す
        for(int i = 0;i < n;i++)
        {
            //新たな得点を入力
            cin >> s;
            //得点を入れて更新
            st.update(s);
        }
        //得点を計算し、結果を配列に追加する
        res.push_back(st.calc_result());
    }
    //結果をすべて出力する
    for(int i : res)
    {
        cout << i << endl;
    }
    return 0;
}