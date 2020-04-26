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
    ListNode* reverseList(ListNode* head) {
            ListNode *prev, *current, *succ;
        current = head;
        prev = NULL;
        succ = NULL;
        
        while (current != NULL) {
            succ = current->next;
            current->next = prev;
            prev = current;
            current = succ;
        }
        
        head = prev;
        return head;
    }
};