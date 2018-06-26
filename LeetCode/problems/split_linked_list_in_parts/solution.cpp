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
    ListNode *split(ListNode *head,int n)
    {
        if(!head)
            return head;
        ListNode * tmp =head;
        while(n>1 && tmp->next )
        {
            tmp=tmp->next;
            --n;
        }
        head=tmp->next;
        tmp->next =NULL;
        return head;
    }
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        ListNode *head=root;
        int rem=0,ele=0,len=0;
        vector<ListNode*> v;
        while(head){
            ++len;
            head=head->next;  
        }
        head=root;
        while(k>0)
        {
            
            ele = len/k;
            if(len%k)
                ++ele;
            head = split(root,ele);
            v.push_back(root);
            
            root=head;
            len-=ele;
            --k;
        }
        return v;
        
    }
};