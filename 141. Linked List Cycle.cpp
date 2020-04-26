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
    bool hasCycle(ListNode *head) {
        if (head == NULL || head->next == NULL) {
            return false;
        }
        
        
        ListNode *p_slow = head;
        ListNode *p_fast = head->next;
        
        while (p_fast != p_slow) {
            // p_fast move 2 step each time.
            if (p_fast == NULL || p_fast->next == NULL) {
                return false;
            }  
            
            p_fast = p_fast->next->next;
            
            p_slow = p_slow->next;
            
            }
        return true;
        }
    };