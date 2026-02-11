// https://leetcode.com/problems/reverse-nodes-in-k-group/


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
    bool isK(ListNode* current, int k){
        int count = 0;
        while(current){
            current=current->next;
            count++;
        }
        return (count>=k);
    }

    ListNode* return_K_plust_oneth(ListNode *current, int k){
        int count = 0;
        while(count<k && current!=NULL){
            count++;
            current=current->next;
        }
        return current;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(isK(head, k)==false)
            return head;
        ListNode* k1 = return_K_plust_oneth(head, k);
        ListNode* prev = NULL;
        ListNode* current = head;
        while(current!=k1){
            ListNode *temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
        }
        head->next = reverseKGroup(k1, k);
        return prev;
    }
};