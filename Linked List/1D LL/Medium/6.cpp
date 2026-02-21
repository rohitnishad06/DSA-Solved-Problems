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

    ListNode* reverseSecondHalf(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr != nullptr){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return true;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        // Find middle
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse second half
        ListNode* newHead = reverseSecondHalf(slow);

        ListNode* first = head;
        ListNode* second = newHead;

        // Compare
        while(second != nullptr){
            if(first->val != second->val){
                reverseSecondHalf(newHead); // restore
                return false;
            }
            first = first->next;
            second = second->next;
        }

        reverseSecondHalf(newHead); // restore list
        return true;
    }
};
