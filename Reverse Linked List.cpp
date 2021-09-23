class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        ListNode* temp = head;
        while(temp != nullptr){
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
            if(temp==nullptr) head = prev;
        } 
        return head;
    }
};
