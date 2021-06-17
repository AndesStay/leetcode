/***************************
 * Description : leetcode练习仿真调试用
 * Create : 2021.06.01
 * Name : Liulihong
 * **************************/
#include "leetcode.h"

/*
* Description : 测试用
* Create : 2021.6.17
*/
int add_lib(int a, int b)
{
    return a+b;
}


/*****************************
 * Description : 15, 三数之和
 * Create : 2021.06.01
 * **************************/
vector< vector<int> > threeSum(vector<int>& nums) 
{

    // // 去除重复元素
    // sort(nums.begin(), nums.end());
    // int len = nums.size(), left, right;
    // for(left = 0, right = 1; right < len; )
    // {
    //     if(nums[left] == nums[right])
    //     {
    //         right++;
    //     }
    //     else
    //     {
    //         left++;
    //         nums[left] = nums[right];
    //         right++;
    //     }
    // }
    // cout << "It's OK." << endl;

}

/*****************************
 * Description : 剑指offer 05, 替换空格
 * Create : 2021.05.31
 * **************************/
string replaceSpace(string s) 
{
    int len = s.size();
    int count = 0;
    for(int i = 0; i < len; i++)
    {
        if(s[i] == ' ')
            count++;
    }
    s.resize(len + count * 2);
    int new_len = s.size();
    for(int left = len - 1, right = new_len - 1; left >= 0; )
    {
        if(s[left] == ' ')
        {
            s[right--] = '0';
            s[right--] = '2';
            s[right--] = '%'; 
            left--;
        }
        else
        {
            s[right] = s[left];
            left--;
            right--;
        }
    }
    return s;
}