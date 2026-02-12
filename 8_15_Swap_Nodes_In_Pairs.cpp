// https://leetcode.com/problems/swap-nodes-in-pairs/

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
    ListNode* swapPairs(ListNode* first){
        if(first==NULL || first->next == NULL)
            return first;
        ListNode* third = first->next->next;
        // these 3 lines are just for reversing the current pair
        ListNode* second = first->next;
        second->next = first;
        first->next = swapPairs(third);
        return second;
    }
};