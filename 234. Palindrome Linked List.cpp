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
    
    bool isPalindrome(ListNode* head) {
         ListNode *fast = head;
        ListNode *slow = head;
        
        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        // odd nodes, second half is shorter.
        if (fast != NULL) {
            slow = slow->next;
        }
        
        slow = reverseList(slow);
        fast = head;
        
        while (slow != NULL) {
            if (fast->val != slow->val) {
                return false;
            }
            fast = fast->next;
            slow = slow->next;
        }
        return true;
    }
};