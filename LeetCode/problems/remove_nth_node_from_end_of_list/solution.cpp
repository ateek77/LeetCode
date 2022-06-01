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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *p1,*p2;
        if(!head){
            return NULL;
        }
        if(!head->next ){
            if(n==1)
                return NULL;
            return head;
        }
        p1=p2= head;
        while(n-- && p2)
            p2=p2->next;
        if(p2==NULL){
                return head->next;
        }
        while(p2->next){
            p2=p2->next;
            p1=p1->next;
        }
        if(p1->next)
            p1->next = p1->next->next;
        return head;
    }
};