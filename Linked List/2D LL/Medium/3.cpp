/*
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode* prev; 

    ListNode(int value) : val(value), next(nullptr), prev(nullptr) {}

    ~ListNode() {
        delete next;
    }
};
*/

class Solution {
public:

    ListNode* findtail(ListNode* head){
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        return temp;
    }

    vector<vector<int>> findPairsWithGivenSum(ListNode* head, int target) {
        vector<vector<int>>ans;
        ListNode* left = head;
        ListNode* right = findtail(head);
        while(left != right && right->next != left){
            if(left->val + right->val == target){
                ans.push_back({left->val, right->val});
                left = left->next;
                right = right->prev;
            }else if(left->val + right->val > target){
                right = right->prev;
            }else{
                left = left->next;
            }
        }
        return ans;
    }
};