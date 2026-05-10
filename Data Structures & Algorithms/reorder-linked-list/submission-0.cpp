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
    void reorderList(ListNode* head) {
        ListNode * nhead = head;
        while(nhead) {
            ListNode * cend = findEndm1(nhead);
            if (cend && cend != nhead) {
                ListNode * temp = nhead->next;
                ListNode * end = cend->next;
                cend->next = nullptr;
                nhead->next = end;
                end->next = temp;
                nhead = temp;
            } else {
                return;
            }
        }
    }

    ListNode* findEndm1(ListNode* head) {
        ListNode* end = nullptr;
        ListNode* nhead = head;
        while(nhead->next) {
            end = nhead;
            nhead = nhead->next;
        }
        return end;
    }
};
