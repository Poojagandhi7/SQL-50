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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int cnt = 0;
        
        while(temp!=nullptr){
            cnt++;
            temp = temp->next;
        }
        long mid = (cnt/2)+1;
        int num = 0;
        temp=head;
        
        while(temp!=nullptr){
            num++;
            if(num==mid){
                break;
            }
            temp=temp->next;
            
        }
        return temp;
        
    }
};