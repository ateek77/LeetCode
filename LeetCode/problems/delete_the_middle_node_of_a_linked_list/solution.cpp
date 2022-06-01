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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head->next)
            return head->next;
        
        ListNode *p1,*p2;
        p1=p2=head;
        while(p1->next->next){
            p1=p1->next->next;
            if(!p1->next)   break;
            p2=p2->next;
        }
        p2->next = p2->next->next;
        return head;
    }
};