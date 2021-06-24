/***************************
 * Description : leetcode练习仿真调试主函数
 * Create : 2021.06.01
 * Name : Liulihong
 * **************************/


#include "leetcode.h"

int main()
{
    vector<int> test{-1,0,1,2,-1,-4};
    vector< vector<int> > ans;
    ans = threeSum(test);
    int len = ans.size();
    for(int i = 0; i < len; i++)
    {
        for(auto j : ans[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}