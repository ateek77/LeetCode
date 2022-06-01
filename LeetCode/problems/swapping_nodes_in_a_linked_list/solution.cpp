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
    ListNode* swapNodes(ListNode* head, int k) {
       if(!head->next)
            return head;
        ListNode *n1,*n2,*p1,*p2;
        p1=p2=head;
        int t=k;
        while(--t && p2){
            p2=p2->next;
        }
        n1=p2;
        while(p2->next){
            p2= p2->next;
            p1=p1->next;
        }
        n2 = p1;
        t=n1->val;
        n1->val = n2->val;
        n2->val=t;
        return head;            
    }
};