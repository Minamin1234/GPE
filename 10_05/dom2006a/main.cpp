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