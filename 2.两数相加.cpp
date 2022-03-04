/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

#include<bits/stdc++.h>
using namespace std;

// 提交的话，需先注释掉下面的结构体定义
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int m = 0;
        int n = l1->val + l2->val;
        if (n > 9)
        {
            m = 1;
            n = n - 10;
        }
        ListNode *ans = new ListNode();
        ans->val = n;
        ListNode *p = ans;
        while (l1->next && l2->next)
        {
            l1 = l1->next;
            l2 = l2->next;
            int n = l1->val + l2->val + m;
            m = 0;
            if (n > 9)
            {
                m = 1;
                n = n - 10;
            }
            ListNode *next = new ListNode();
            next->val = n;
            p->next = next;
            p = p->next;
        }
        while (l1->next)
        {
            l1 = l1->next;
            int n = l1->val + m;
            m = 0;
            if (n > 9)
            {
                m = 1;
                n = n - 10;
            }
            ListNode *next = new ListNode();
            next->val = n;
            p->next = next;
            p = p->next;
        }
        while (l2->next)
        {
            l2 = l2->next;
            int n = l2->val + m;
            m = 0;
            if (n > 9)
            {
                m = 1;
                n = n - 10;
            }
            ListNode *next = new ListNode();
            next->val = n;
            p->next = next;
            p = p->next;
        }
        if (m)
        {
            ListNode *next = new ListNode();
            next->val = m;
            p->next = next;
            p = p->next;
        }
        return ans;
    }
};
// @lc code=end

