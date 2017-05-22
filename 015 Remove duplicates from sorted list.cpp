# Description
================================================================
Given a sorted linked list, delete all duplicates such that each element appear only once.
For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3.
----------------------------------------------------------------
# Solution
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *q=head;
        while(q)
        {
            while(q->next && q->val==q->next->val)
            {
                q->next=q->next->next;
            }
            q=q->next;
        }
        return head;
    }
};