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
    struct comp{
        bool operator()(pair<int , ListNode*> &a,pair<int , ListNode*> &b)
        {
            return a.first >b.first ; 
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
      
        priority_queue<pair<int , ListNode*> ,vector<pair<int , ListNode*> > , comp> que;
        int len = lists.size();
        
        for(int i=0;i<len;++i)
        {
            if(lists[i]!=NULL)
                que.push(make_pair(lists[i]->val,lists[i]));
        }
        ListNode* head=NULL,*pre;
        while(!que.empty())
        {
            auto it  = que.top(); que.pop();
            cout<<it.first<<" ";
            if(!head)                   
                head = pre = it.second;
            else
            {
                pre->next = it.second;
                pre = pre->next;
            }
            auto itt = it.second;
            if(itt->next)       
                que.push(make_pair(itt->next->val,itt->next));
                        
        }
        pre->next=NULL;
        return head;
    }
};