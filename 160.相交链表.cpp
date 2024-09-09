/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *dummyHeadA = new ListNode(0);
        dummyHeadA->next = headA;
        ListNode *curA = dummyHeadA;
        ListNode *dummyHeadB = new ListNode(0);
        dummyHeadB->next = headB;
        ListNode *curB = dummyHeadB;
        int sizeA = -1, sizeB = -1;
        while(curA){
            curA = curA->next;
            sizeA++;
        }
        while(curB){
            curB = curB->next;
            sizeB++;
        }
        int diff = sizeA - sizeB >= 0 ? sizeA - sizeB : sizeB - sizeA;
        curA = dummyHeadA;
        curB = dummyHeadB;
        if(sizeA-sizeB>=0){
            for (int i = 0; i < diff;i++){
                curA = curA->next;
            }
        }else{
            for (int i = 0; i < diff;i++){
                curB = curB->next;
            }
        }
        while(curA->next != curB->next){
            curA = curA->next;
            curB = curB->next;
        }
        return curA->next;
    }
};
// @lc code=end

