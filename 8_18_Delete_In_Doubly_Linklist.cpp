// https://www.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1

/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    Node* delPos(Node* head, int pos) {
        Node* current = head;
        // first base case if list is empty 
        if(current==NULL)
            return NULL;
        // second base case if pos to delete is first
        if(pos==1){
            // if there's only one element
            if(current->next==NULL){
                delete current;
                return NULL;
            }
            // if there are more than one elements
            else{
                current->next->prev = NULL;
                head = current->next;
                delete current;
                return head;
            }
        }
        // if there are more then one deletions and position is also greater then 1
                int cp = 1;
        while(cp<pos && current!=NULL){
            cp++;
            current=current->next;
        }
        if(cp==pos && current!=NULL){
            current->prev->next = current->next;
            if(current->next)
                current->next->prev = current->prev;
            delete current;
        }
        return head;
    }
};