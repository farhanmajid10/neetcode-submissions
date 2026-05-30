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
        int len = 0;
        ListNode* curr = head;
        while(curr != nullptr){
            len++;
            curr = curr->next;
        }
        int mid = (len/2) + 1;
    
        curr = head;
        int count = 0;
        ListNode* s_head = nullptr;
        while(curr != nullptr){
            count++;
            if(count == mid){
                s_head = curr->next;
                curr->next = nullptr;
                break;
            }
            curr = curr->next;
        }

        curr = s_head;
        ListNode* prev = nullptr;
        ListNode* nxt = nullptr;
        while(curr != nullptr){
            nxt = curr->next;
            if(nxt == nullptr){ s_head = curr;}
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }

        curr = head->next;
        ListNode* final = head;
        nxt = nullptr;
        ListNode* nxt2 = nullptr;
        while((curr != nullptr) && (s_head != nullptr)){
            nxt = curr->next;
            nxt2 = s_head->next;
            final->next = s_head;
            final = final->next;
            final->next = curr;
            final = final->next;
            curr = nxt;
            s_head = nxt2;
        }
        if((curr == nullptr) && (s_head == nullptr)){
            return;
        }
        if(curr == nullptr){
            final->next = s_head;
        }else if(s_head == nullptr){
            final->next = curr;
        }
        return;
    }
};

