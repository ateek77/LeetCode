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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1 || !list2){
            return list1?list1:list2;
        }
        
        ListNode* p1,*p2,*tmp,*ans=NULL;
        p1=list1;p2=list2;
        
        while(p1 && p2){
            if(p1->val<=p2->val){
                tmp=p1;
                p1=p1->next;
            }else{
                tmp=p2;
                p2=p2->next;                
            }
            if(ans)
                ans->next=tmp;     
            ans=tmp;
        }
        if(p1){
            ans->next= p1;
        }else if(p2)
            ans->next=p2;
        
        if(list1->val<=list2->val)
            return list1;
        return list2;
    }
};