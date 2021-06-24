#include "leetcode.h"

/***************************
 * Description : leetcode练习仿真调试用
 * Create : 2021.06.01
 * **************************/
vector< vector<int> > VectorSum(vector<int>& nums) 
{
    vector< vector<int> > ans;

    sort(nums.begin(), nums.end());
    int len = nums.size();
    int *p = &nums[0], *q = &nums[len - 1], *m = p + 1;
    
    ans.push_back({*p, *(p+1)});
    ans.push_back({*(q-1), *q});

    return ans;
}


/*****************************
 * Description : 15, 三数之和
 * Create : 2021.06.01
 * **************************/
vector< vector<int> > threeSum(vector<int>& nums) 
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    int len = nums.size();
    int *p = &nums[0], *q = &nums[len - 1], *m = p + 1, sum;

    while(p != &nums[len - 1])
    {
        m = p + 1;
        while(m < q)
        {
            sum = *p + *q + *m;
            if(sum < 0)
            {
                m++;
                continue;
            }
            else if(sum > 0)
                break;
            else
            {
                ans.push_back({*p, *m, *q});
                break;  // 防止重复
            }
        }
        // p向前移动，防止重复
        while(*(p+1) == (*p))
            p++;
    }

    return ans;
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