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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == right) return head; // No need to reverse if left equals right
        
        ListNode* dummy = new ListNode(0); // Dummy node to handle cases where left = 1
        dummy->next = head;
        ListNode* preLeft = dummy; // Node before left
        ListNode* leftNode = head; // Node at left position

        // Move to the left position
        for (int i = 1; i < left; i++) {
            preLeft = preLeft->next;
            leftNode = leftNode->next;
        }

        ListNode* pre = nullptr;
        ListNode* cur = leftNode;
        ListNode* next = nullptr;

        // Reverse the sublist between left and right positions
        for (int i = left; i <= right; i++) {
            next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }

        // Connect the reversed sublist
        preLeft->next = pre;
        leftNode->next = cur;

        return dummy->next;
        
    }
};
