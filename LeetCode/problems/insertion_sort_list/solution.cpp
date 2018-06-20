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
    ListNode* insertionSortList(ListNode* head) {
        ListNode *hd=NULL;
        while(head)
        {
            int data =head->val;
            ListNode *nd=new ListNode(data);
            if(!hd)
                    hd =nd;
            else if(hd->val > data)
            {
                  nd->next =hd;
                  hd=nd;  
            }
            else{
                ListNode *tmp=hd;
                while(tmp->next && tmp->next->val <data)
                    tmp=tmp->next;
                nd->next = tmp->next;
                tmp->next=nd; 
            }            
            head=head->next;
        }
        return hd;
    }
};