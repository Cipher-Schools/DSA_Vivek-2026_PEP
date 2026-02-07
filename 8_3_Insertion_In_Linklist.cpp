
// head -> [1 | ]  -> [2 | ] -> [3 | ] -> [5 | ] -> NULL

// ListNode* newNode = new ListNOde(1);
// newNode->next = head;
// head = newNode;

# include <bits/stdc++.h>
using namespace std;

class ListNode{
    public:
        int data;
        ListNode * next;
    
        ListNode(int data){
            this->data = data;
            this->next = NULL;
        }
};

ListNode* createList(int n){
    ListNode* head;
    ListNode* current;
    for(int i=0; i<n; i++){
        int data;
        cin >> data;
        ListNode* newNode = new ListNode(data);
        // newNode->data = data;
        // newNode->next = NULL;
        if(i==0){
            head = newNode;
        }
        else{
            current->next = newNode;
            // current = current->next;
        }
        current = newNode;
    }
    return head;
}

void print(ListNode* head){
    ListNode *current = head;
    while(current!=NULL){
        cout << current->data << " ";
        current = current->next;
    }
}

ListNode* insertion(ListNode *head, ListNode *node){
    node->next = head;
    head = node;
    return head;
}
void insertion_at_end(ListNode *head, ListNode *node){
    ListNode *current = head;
    while(current->next!=NULL){
        current = current->next;
    }
    current->next = node;
}




int main(){
    int n;
    cin >> n;
    ListNode *head = createList(n);
    // print(head);
    ListNode *newNode = new ListNode(100);
    head = insertion(head, newNode);
    newNode = new ListNode(10);
    insertion_at_end(head, newNode);
    newNode = new ListNode(11);
    insertion_at_end(head, newNode);
    print(head);

}