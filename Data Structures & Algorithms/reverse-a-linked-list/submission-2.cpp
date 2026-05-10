/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };0123, 1023, 2103, 3210
 */ 

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // if (head->next->next == nullptr) {
        //      ListNode* temp = head->next;
        //     temp->next = nhead;
        //     head->next = nullptr;
        //     nhead = temp;
        //     return nhead;
        // }
        if (!head) {
            return nullptr;
        }
        if (head->next == nullptr) {
            return head;
        }
        ListNode* nhead = head;
        while(head->next && head->next->next) {
            ListNode* ncon = head->next->next;
            ListNode* temp = head->next;
            temp->next = nhead;
            head->next = ncon;
            nhead = temp;
        }
        ListNode* temp = head->next;
        temp->next = nhead;
        head->next = nullptr;
        nhead = temp;
        return nhead;
    }
};
