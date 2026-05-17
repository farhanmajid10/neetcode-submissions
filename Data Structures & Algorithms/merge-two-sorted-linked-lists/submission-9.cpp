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
        ListNode* curr = nullptr;
        ListNode* first = list1;
        ListNode* second = list2;

        if((list1 == nullptr) && (list2 == nullptr)){
            return nullptr;
        }
        if(list1 == nullptr){
            return list2;
        }
        if(list2 == nullptr){
            return list1;
        }
        if(first->val < second->val){
            curr = first;
            first = first->next;
        }else{
            curr = second;
            second = second->next;
        }
        ListNode* final = curr;
        while((first != nullptr) && (second!= nullptr)){
            if(first->val < second->val){
                curr->next = first;
                first = first->next;
            }else{
                curr->next = second;
                second = second->next;
            }
            curr = curr->next;
            if(first == nullptr){
                curr->next = second;
                return final;
            }
            if(second == nullptr){
                curr->next = first;
                return final;
            }
        }
        if(first == nullptr){
            curr->next = second;
        }else{curr->next = first;}
        return final;
    }
};
