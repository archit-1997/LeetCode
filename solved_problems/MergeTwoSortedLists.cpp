/*Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

Example:

Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4*/

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode *ans=NULL;
        
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;       
        if(l1->val<=l2->val)
        {
            ans=l1;
            ans->next=mergeTwoLists(l1->next,l2);
        }
        else
        {
            ans=l2;
            ans->next=mergeTwoLists(l1,l2->next);
        }
        
        
        return ans;
    }
};
