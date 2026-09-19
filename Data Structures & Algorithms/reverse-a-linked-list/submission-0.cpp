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

class Solution {
#define node ListNode
#define null NULL
public:
    ListNode* reverseList(ListNode* head) {
        if(!head or !head->next)
        {
            return head;
        }
        node* prev=null;
        node* curr=head;
        while(curr)
        {
            node* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
};
