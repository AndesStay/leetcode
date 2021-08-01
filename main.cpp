/***************************
 * Description : leetcode练习仿真调试主函数
 * Create : 2021.06.01
 * Name : Liulihong
 * **************************/


#include "leetcode.h"
#include <iostream>
using namespace std;

int main()
{
    string test = "  hello  world ";
    string result = reverseWords(test);
    printf(result.c_str());
    return 0;
    
}

#if 0
// ListNode *head = new ListNode(1); 
// head->next = head; 
ListNode *head = new ListNode(3); ListNode *second = new ListNode(2);
ListNode *third = new ListNode(0); ListNode *forth = new ListNode(-4);
head->next = second; second->next= third; third->next = forth; forth->next = second;
// bool ans = hasCycle(head);
ListNode *ans = new ListNode(0);
ans = detectCycle(head);
#endif