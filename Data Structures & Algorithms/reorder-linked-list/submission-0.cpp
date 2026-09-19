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
#define null NULL
#define node ListNode
public:
    ListNode* reverselist(node* head)
    {
        if(!head or!head->next)return head;

        node* prev= null;
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
    void reorderList(ListNode* head) {
        node* slow=head;
        node* fast=head;
        while(fast and fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        node* first=head;
        node* second=reverselist(slow->next);
        slow->next=null;
        while(second)
        {
            node* t1=first->next;
            node* t2=second->next;

            first->next=second;
            second->next=t1;

            first=t1;
            second=t2;
        }
        
    }
};
