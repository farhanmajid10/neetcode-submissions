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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> result;
        for(int i = 0; i < lists.size(); i++){
            if(lists[i] != nullptr){
                ListNode* current = lists[i];
                while(current != nullptr){
                    result.push_back(current->val);
                    current = current->next;
                }
            }
        }
        if(result.empty()){
            return nullptr;
        }
        sortedList(result, 0, result.size() - 1);
        ListNode* current = new ListNode(result[0]);
        ListNode* fin = current;
        for(int i = 1; i < result.size(); i++){
            ListNode* newNode = new ListNode(result[i]);
            current->next = newNode;
            current = current->next;
        }
        return fin;
    }
    void sortedList(vector<int>& result, int begin, int end){
        if(end - begin == 0){
            return;
        }
        int middle = begin + (end - begin)/2;
        sortedList(result, begin, middle);
        sortedList(result, middle + 1, end);
        merge(result, begin, end, middle);
    }
    void merge(vector<int>& result, int begin, int end, int middle){
        int k = begin, l = middle + 1;
        vector<int> temp;
        while(k <= middle && l <= end){
            if(result[k] < result[l]){
                temp.push_back(result[k++]);
            }else{
                temp.push_back(result[l++]);
            }
        }
        while(k <= middle){
            temp.push_back(result[k++]);
        }
        while(l <= end){
            temp.push_back(result[l++]);
        }
        for(int m = 0; m < temp.size(); m++){
            result[begin + m] = temp[m];
        }
    }
};
