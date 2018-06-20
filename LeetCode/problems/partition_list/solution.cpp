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
    ListNode* partition(ListNode* head, int x) {
        ListNode *nd ,*l1=NULL,*l2=NULL,*p1=NULL,*p2=NULL,*tmp=NULL;
        while(head)
        {
            tmp=head->next;
            nd=head;
            if(head->val < x){
                if(!l1)
                    l1=p1=nd;
                else
                {
                    p1->next=nd;
                    p1=p1->next;
                }
            }
            else{
                if(!l2)
                    l2=p2=nd;
                else
                {
                    p2->next =nd;
                    p2=p2->next;
                }
            }
            head=tmp;
        }
        
       // p1->next=p2->next=NULL;
        if(p1 && p2)
        {
            p1->next=l2;
            p2->next=NULL;
        }
        else if(p2)
        {
            return l2;
        }
        return l1;       
    }
};