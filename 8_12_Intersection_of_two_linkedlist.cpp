// https://leetcode.com/problems/intersection-of-two-linked-lists/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int count1 = 0, count2=0;
        ListNode *current = headA;
        // simple loop for counting number of nodes in first list
        while(current){
            current = current->next;
            count1++;
        }
        current = headB;
        // simple loop for counting number of nodes in second list
        while(current){
            current = current->next;
            count2++;
        }
        // take the difference to know how many nodes we need to move ahead in larger list
        int dif = abs(count1-count2);
        // move ahead dif nodes in larger list
        if(count1>count2){
            while(dif){
                dif--;
                headA=headA->next;   
            }
        }
        else{
            while(dif){
                dif--;
                headB=headB->next;   
            }
        }
        // move ahead both pointers headA and headB unless both are       pointing to same node
        while(headA!=headB){
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
    }
};