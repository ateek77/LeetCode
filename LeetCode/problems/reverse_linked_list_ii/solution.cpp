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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode* h1=head,*tmp,*t=NULL,*p=NULL,*pre=NULL;
        n-=m;
        while(--m>0 && h1)
        {
            pre=h1;
            h1=h1->next;
        }
        tmp=h1; 
        while(n>=0 && tmp)
        {
          //  cout<<tmp->val<<" ";
            p=tmp;
            tmp=tmp->next; 
            p->next=t;
            t=p;
            --n;
        }
        if(!pre)
        {
            head->next=tmp;
            return t;
        }
        pre->next->next=tmp;
        pre->next=p;
        // while(head)
        // {    cout<<head->val<<" ";
        //     head=head->next;}
        return head;
    }
};