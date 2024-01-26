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
    void deleteNode(ListNode* node) {
                
 node->val = node->next->val;

    // Save the pointer to the next node
    ListNode* temp = node->next;

    // Update the next pointer to skip the next node
    node->next = node->next->next;

    // Delete the original next node
    delete temp;
    }
};