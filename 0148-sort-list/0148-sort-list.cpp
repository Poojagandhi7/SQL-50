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
    ListNode* sortList(ListNode* head) {
        
        ListNode* temp = head;
        vector<int> ans;
        
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        while(temp!=nullptr){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        sort(ans.begin(),ans.end());
        
        ListNode* newhead = new ListNode(ans[0]);
        ListNode* blah = newhead;
        for(int i=1;i<ans.size();i++){
            ListNode* current = new ListNode(ans[i]);
            blah->next=current;
            blah = blah->next;
        }
        return newhead;
    }
};