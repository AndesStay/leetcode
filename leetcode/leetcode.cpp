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
    vector< vector<int> > ans;
    int len = nums.size(), first, left, right, sum;

    for(first = 0; first < len; first++)//第一层循环，0-(len-1)
    {
        // 首元素大于0，直接返回`
        if(nums[first] > 0)
            return ans;

        // first递增时去重
        if(first > 0 && nums[first] == nums[first-1])
            continue;

        left = first + 1; right = len - 1;//第二层循环，双指针起始位置
        while(left < right)
        {
            sum = nums[first] + nums[left] + nums[right];
            if(sum > 0)
            {
                right--;
            }
            else if(sum < 0)
            {
                left++;
            }
            else
            {
                ans.push_back({nums[first], nums[left], nums[right]});
                //双指针去重
                while((right > left) && (nums[right] == nums[right-1])) right--;
                while((right > left) && (nums[left] == nums[left+1])) left++;

                left++;
                right--;
            }
        }
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