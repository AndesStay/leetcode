/***************************
 * Description : leetcode练习仿真调试用
 * Create : 2021.06.01
 * Name : Liulihong
 * **************************/

#ifndef _LEETCODE_H_
#define _LEETCODE_H_

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


/***************************
 * Description : 142环形链表
 * Create : 2021.06.28
 * **************************/
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

/***************************
 * Description : 142环形链表
 * Create : 2021.06.28
 * **************************/
ListNode *detectCycle(ListNode *head);

/***************************
 * Description : 142环形链表
 * Create : 2021.06.28
 * **************************/
 
bool hasCycle(ListNode *head);

/*
* Description : 测试用
* Create : 2021.6.17
*/
vector< vector<int> > VectorSum(vector<int>& nums);

/*****************************
 * Description : 15, 三数之和
 * Create : 2021.06.01
 * **************************/
vector< vector<int> > threeSum(vector<int>& nums);

/*****************************
 * Description : 剑指offer 05, 替换空格
 * Create : 2021.05.31s
 * **************************/
string replaceSpace(string s) ;

#endif