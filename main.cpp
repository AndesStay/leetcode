/***************************
 * Description : leetcode练习仿真调试主函数
 * Create : 2021.06.01
 * Name : Liulihong
 * **************************/


#include "leetcode.h"

int main()
{
    // ListNode *head = new ListNode(1); 
    // head->next = head; 
    ListNode *head = new ListNode(3); ListNode *second = new ListNode(2);
    ListNode *third = new ListNode(0); ListNode *forth = new ListNode(-4);
    head->next = second; second->next= third; third->next = forth; forth->next = second;
    // bool ans = hasCycle(head);
    ListNode *ans = new ListNode(0);
    ans = detectCycle(head);
    return 0;
    
}