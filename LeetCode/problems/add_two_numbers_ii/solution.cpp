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
    ListNode *reverse(ListNode * head)
    {
        if(!head)
            return head;
        ListNode *pre=NULL,*crnt=head,*nxt =head;
        while(crnt)
        {
            nxt =crnt->next;
            crnt->next = pre;
            pre=crnt;
            crnt =nxt;
        }
        return pre;        
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        l1 = reverse(l1);
        
        l2 = reverse(l2);
        
        int cry=0;
        ListNode* pre=NULL,*head =l1; 
        while(l1 || l2)
        {
            if(l1 && l2)
                l1->val = l1->val + l2->val;
            else if(l2){
                l1 = pre->next = l2; 
                l2=NULL;
            }
                
            if(cry)
                l1->val+=cry;
            
            cry=0;
            
            if(l1->val>9){
                cry =1;
                l1->val%=10;
            }
            pre=l1;
            l1=l1->next;
            if(l2)
                l2=l2->next;             
        }
        if(cry)
        {
            pre->next = new ListNode(cry); 
        }
        head = reverse(head);
        return head;
    }
};