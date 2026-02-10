// https://www.geeksforgeeks.org/problems/insert-in-a-sorted-list/1


/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* sortedInsert(Node* head, int key) {
        struct Node* newNode  = new Node(key);
        if(newNode->data<head->data){
            newNode->next = head;
            return newNode;
        }
        struct Node *prev = head;
        struct Node *current = head->next;
        while(current!=NULL && current->data<newNode->data){
            prev = current;
            current=current->next;
        }
        prev->next = newNode;
        newNode->next = current;
        return head;
    }
};