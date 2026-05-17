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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;
        ListNode* first = list1;
        ListNode* second = list2;
        if((first == nullptr) && (second == nullptr)){return nullptr;}
        if(first == nullptr){return second;}
        if(second == nullptr){return first;}
        while((first != nullptr) && (second != nullptr)){
            if(first->val < second->val){
                tail->next = first;
                first = first->next;
            }else{
                tail->next = second;
                second = second->next;
            }
            tail = tail->next;
        }
        tail->next = (first == nullptr)? second:first;
        return dummy.next;
    }
};
