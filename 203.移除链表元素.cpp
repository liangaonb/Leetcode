/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
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
class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *temp = nullptr;
        while (head != nullptr && head->val == val)
        {
            
            head = head->next;
        }
        temp = head;
        while (temp != nullptr && temp->next != nullptr)
        {

            if (temp->next->val == val)
            {
                temp->next = temp->next->next;
            }
            else temp = temp->next;
        }
        return head;
    }
};
// @lc code=end
