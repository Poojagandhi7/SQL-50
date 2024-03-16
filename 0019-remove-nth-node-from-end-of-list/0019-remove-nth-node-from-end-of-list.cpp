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
        int size = 0;
        ListNode* current = head;
        while (current != nullptr) {
            size++;
            current = current->next;
        }

        current = head;
        if(head== nullptr || head->next== nullptr || n<=0 || n>size ){
            return nullptr;
        }
        // if(head==size){
        //     return nullptr;
        // }

        if(n==size){
            ListNode* temp = head;
            head = head->next;
            delete temp ;
            return head;
        }

    
        int a = size-n+1;

        ListNode* prev = nullptr;
        for (int i = 1; i < a; i++) {
            prev = current;
            current = current->next;
        }
        prev->next = current->next;
        delete current;
        return head;
        }
};  