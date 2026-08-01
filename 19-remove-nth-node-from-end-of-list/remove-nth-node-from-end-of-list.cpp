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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* mover = head;

        int len = 0;
        while(mover){
        len++;
        mover = mover->next;
        }
    
        if(len == n){
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        mover = head;

        for(int i = 1; i<len-n; i++){
            mover = mover->next;
        }

        ListNode* temp = mover->next;

        mover->next = temp->next;
        temp->next = nullptr;

        delete temp;

        return head;
    }
};