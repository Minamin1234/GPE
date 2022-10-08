/**
 * @file main.cpp
 * @author ìÏÅ@óõãË
 * @date 2022-10-08
 * @brief ICPCÅ@âﬂãéñ‚ëË
 * @see http://icpc.iisf.or.jp/past-icpc/domestic2006/contest/all_ja.html
 * @copyright Copyright (c) 2022 MINAMI RIKU
 * 
 */
#include <iostream>
#include <vector>

#include "dom2006a/dom2006a.h"
//#include "dom2006a.cpp"

using namespace std;

int main()
{
    int T = 12;
    int a,d,n;
    vector<int> res;
    for(int i = 0;i < T;i++)
    {
        cin >> a >> d >> n;
        res.push_back(dom2006a::dirichlet(a,d,n));
    }
    for(int i : res)
    {
        cout << i << endl;
    }
    return 0;
}