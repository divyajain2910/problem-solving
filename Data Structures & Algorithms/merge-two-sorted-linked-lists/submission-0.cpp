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
public:
#define node ListNode
#define null NULL
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        node* dummy=new node(0);
        node* tail=dummy;
        while(list1 and list2)
        {
            if(list1->val <= list2->val)
            {
                tail->next=list1;
                list1=list1->next;
            }
            else
            {
                tail->next=list2;
                list2=list2->next;
            }
            tail=tail->next;
        }
        tail->next=(list1) ? list1 : list2;
        return dummy->next;
    }
};
