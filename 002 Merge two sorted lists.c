# Description
====================================================================================
Merge two sorted linked lists and return it as a new list. 
The new list should be made by splicing together the nodes of the first two lists.
------------------------------------------------------------------------------------
# Solution:
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *head, *tail;
    head=(struct ListNode *)malloc(sizeof(struct ListNode));
    tail=head;
    bool i;
    for(i=false; l1 && l2; tail=tail->next)
    {
        i=(l1->val)>(l2->val);
        tail->next=i?l2:l1;
        l2=i?l2->next:l2;
        l1=i?l1:l1->next;
        
    }
    tail->next=l1!=NULL?l1:l2;
    return head->next;
}
