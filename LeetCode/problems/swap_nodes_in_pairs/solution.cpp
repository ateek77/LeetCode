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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)   return head;
        
        ListNode *ft,*tmp,*n=head->next;
        tmp=NULL;
        while(head && head->next){
            ft= head->next->next;       
            
            if(tmp)
                tmp->next=head->next;
            tmp=head;
            //swap
            head->next->next = head;            
            head=head->next=ft;
        
        }
        return n;
    }
};