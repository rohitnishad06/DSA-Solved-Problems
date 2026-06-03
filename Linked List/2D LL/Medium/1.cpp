/*
class ListNode {
public:
    int data;
    ListNode* prev;
    ListNode* next;

    ListNode(int val) : data(val), prev(nullptr), next(nullptr) {}
};
*/
class Solution {
public:
    ListNode* reverseDLL(ListNode* head) {

        if(head == nullptr) return nullptr;

        ListNode* current = head;
        ListNode* temp = nullptr;

        while(current != nullptr){

            // swap prev and next
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;

            // move to next node (which is previous before swap)
            current = current->prev;
        }

        // After loop, temp will be at node before new head
        if(temp != nullptr)
            head = temp->prev;

        return head;
    }
};