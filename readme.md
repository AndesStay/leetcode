leetcode练习


/*
 * @Copyright (c): HMN Smart Co., Ltd. 2021-2031. All rights reserved.
 * @Description: leetcode测试
 * @Author: liulihong
 * @Create: 
 * @Notes: 
 * @History: 
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) 
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    int len = nums.size();
    int *p = &nums[0], *q = &nums[len - 1], *m = p + 1, sum;


    while(p != &nums[len - 1])
    {
        m = p + 1; q = &nums[len - 1];
        while(m < q)
        {
            sum = *p + *q + *m;
            if(sum > 0) q--;
            else if(sum < 0) m++;
            else
            {
                ans.push_back(vector<int>{*p, *m, *q});
                break;
            }
        }
        p++;
    }

    return ans;
}


int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans;
    ans = threeSum(nums);

    cout << "hello world." << endl;
}
