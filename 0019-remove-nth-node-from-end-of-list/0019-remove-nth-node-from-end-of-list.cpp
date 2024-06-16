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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* temp = head;
        ListNode* prev = nullptr;
        int size=0;
        int cnt=1;
        
        
        while (temp != nullptr) {
            size++;
            temp = temp->next;
        }
        
        if(head== nullptr || head->next==nullptr || n<=0 || n>size ){
            return nullptr;
        }
        
        if(n==size){
            ListNode* current = head;
            head = head->next;
            delete current ;
            return head;
        }
        
        temp=head;
        
        while(temp!=nullptr){
            if(n==size-cnt+1){
                prev->next=temp->next;
                delete temp;
                break;
            }
            cnt++;
            prev=temp;
            temp=temp->next;
        }
        
        return  head;
    }
};  

















// int size = 0;
//         ListNode* current = head;
//         while (current != nullptr) {
//             size++;
//             current = current->next;
//         }

//         current = head;
//         if(head== nullptr || head->next== nullptr || n<=0 || n>size ){
//             return nullptr;
//         }
//         // if(head==size){
//         //     return nullptr;
//         // }

//         if(n==size){
//             ListNode* temp = head;
//             head = head->next;
//             delete temp ;
//             return head;
//         }

    
//         int a = size-n+1;

//         ListNode* prev = nullptr;
//         for (int i = 1; i < a; i++) {
//             prev = current;
//             current = current->next;
//         }
//         prev->next = current->next;
//         delete current;
//         return head;