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
    int numComponents(ListNode* head, vector<int>& G) {
        if(!head)
            return 0;    
        set<int> s(G.begin(),G.end()); 
        int flg=0,cnt=0;
        while(head)
        {
            auto it  = s.find(head->val);
            if(it != s.end())
            {
                if(!flg)
                    cnt++;
                flg=1;
            }
            else
                flg=0;
            head = head->next;
        } 
        return cnt;
    }
};