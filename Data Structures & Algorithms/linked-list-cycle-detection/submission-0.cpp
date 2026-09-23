class Solution {
public:
    bool hasCycle(ListNode *head) {
        // Handle empty list or single node with no cycle
        if (head == nullptr || head->next == nullptr) {
            return false;
        }

        ListNode *slow = head;
        ListNode *fast = head;

        // Since 'fast' moves 2 steps, we must ensure 'fast' 
        // and 'fast->next' are not null.
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;          // Move 1 step
            fast = fast->next->next;    // Move 2 steps

            if (slow == fast) {         // They met! Cycle detected.
                return true;
            }
        }

        return false; // 'fast' reached the end, so no cycle exists.
    }
};