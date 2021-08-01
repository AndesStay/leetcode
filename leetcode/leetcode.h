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



/*
* Description : 151反转字符串单词 (2) 整个字符串反转
* Create : 2021.8.1
*/
string reverseStr(string &s, int front, int back);

/*
* Description : 151反转字符串单词 (3) 字符串中单词反转
*C reate : 2021.8.1
*/
string reverseEveryWord(string &s);


/*
* Description : 151反转字符串单词 (1) 删除多余空格
*C reate : 2021.07.12
*/
string delspace(string &s);

/*
* Description : 151反转字符串单词
*C reate : 2021.07.12
*/
string reverseWords(string &s);


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