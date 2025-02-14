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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* current = new ListNode(-1);
        ListNode* newhead= current;
        int carry = 0;
        int sum = 0;
        
        while(temp1!=nullptr || temp2!=nullptr){
            sum=carry;
            if(temp1){sum += temp1->val;}
            if(temp2){sum += temp2->val;}
            ListNode* newnode = new ListNode(sum%10);
            carry = sum/10;
            
            current->next = newnode;
            current = current->next;
            
            if(temp1){
                temp1=temp1->next;
            }
            if(temp2){
                temp2=temp2->next;
            }
        }
        newhead=newhead->next;
        if(carry){
            ListNode* newnode = new ListNode(carry);
            current->next=newnode;
            
        }
        return newhead;
        
    }
};