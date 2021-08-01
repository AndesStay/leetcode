#include "leetcode.h"

/*
* Description : 151反转字符串单词
* Create : 2021.07.12
*/
string reverseWords(string &s) {
    string ans1 = delspace(s);
    string ans2 = reverseStr(ans1, 0, ans1.size() - 1);
    string ans3 = reverseEveryWord(ans2);
    return ans3;

}

/*
* Description : 151反转字符串单词 (3) 字符串中单词反转
* Create : 2021.8.1
*/
string reverseEveryWord(string &s)
{
    int front = 0, back = 0;
    // back到达第一个词的结尾,可能字符串只有一个词
    while(back + 1 < s.size() && s[back + 1] != ' ') 
            back++;

    while(front < s.size() && back < s.size())
    {
        s = reverseStr(s, front, back);

        front = back + 2; // 下一个词的词头
        back = front;
        // 词尾2中情况：1.遇到空格 2.超出size
        while(back + 1 < s.size() && s[back + 1] != ' ') 
            back++;
    }

    return s;
}

/*
* Description : 151反转字符串单词 (2) 整个字符串反转
* Create : 2021.8.1
*/
string reverseStr(string &s, int front, int back)
{
    // int front = 0, back = s.size() - 1;
    while(front < back)
    {
        char tmp = s[front];
        s[front++] = s[back];
        s[back--] = tmp;
    }
    return s;
}

/*
* Description : 151反转字符串单词 (1) 删除多余空格
* Create : 2021.8.1
*/
string delspace(string &s)
{
    // 确定字符串非空
    int len = s.size();
    string ans = " ";
    if(len < 0)
        return ans;

    // 首先去掉空格
    int slow = 0, fast = 0;
    while(fast < len && s[fast] == ' ')
        fast++;
    for(; fast < len; fast++)
    {
        // 去除单词间多余空格
        if((fast - 1) > 0 && s[fast] == s[fast-1] && s[fast] == ' ')
            continue;
        else
            s[slow++] = s[fast];
    }
    // 可能最后一个字符是空格
    if(slow - 1 > 0 && s[slow-1] == ' ')
        s.resize(slow - 1);
    else
        s.resize(slow);
    return s;
}

/***************************
 * Description : 142环形链表
 * Create : 2021.06.28
 * **************************/
ListNode *detectCycle(ListNode *head) {
    if(head == nullptr || head->next == nullptr)
        return nullptr;
    ListNode *slow = head, *fast = head->next;
    while(slow != fast)
    {
        if(slow->next == nullptr || fast->next == nullptr || fast->next->next == nullptr)
            return nullptr;
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
            break;
    }
    return slow;
}

/***************************
 * Description : 141环形链表
 * Create : 2021.06.28
 * **************************/
bool hasCycle(ListNode *head) {
    //0 or 1 special ocassion 
    if(head == NULL || head->next == NULL)
        return false;
    ListNode *slow = head, *fast = head->next;
    while(slow != fast)
    {
        if(slow->next == NULL)
            return false;
        if(fast->next == NULL || fast->next->next == NULL)
            return false;
        slow = slow->next;
        fast = fast->next->next;
    }
    return true;
}


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