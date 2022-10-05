#include <iostream>
#include <vector>
#include "ScoreTotalizer.h"

using namespace std;

int main()
{
    int T = 4;
    int n,s;
    vector<int> res;
    for(int i = 0;i < T;i++)
    {
        cin >> n;
        cin >> s;
        ScoreTotalizer st(s);
        st.update(s);
        n--;
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