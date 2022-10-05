#include <iostream>
#include "dom2007a/dom2007a.h"

#include <vector>

using namespace std;

int main()
{
    int N = 4;
    int n,s;
    vector<int> res;
    for(int i = 0;i < N;i++)
    {
        cin >> n;
        cin >> s;
        n--;
        dom2007a::score_totalizer st(s,s);
        st.update(s);
        for(int i = 0;i < n;i++)
        {
            cin >> s;
            st.update(s);
        }
        res.push_back(st.calc_result());
    }
    for(int i : res)
    {
        cout << i << endl;
    }
    return 0;
}