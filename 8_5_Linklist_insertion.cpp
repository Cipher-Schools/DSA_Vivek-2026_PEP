# include<bits/stdc++.h>
using namespace std;

class ListNode{
    public:
        int data;
        ListNode *next;

        ListNode(int data){
            this->data = data;
            this->next = NULL;
        }
};


ListNode* createList(int n){
        ListNode * prev = NULL;
        ListNode *head;
        for(int i=1; i<=n; i++){
            int data;
            cin >> data;
            ListNode *newNode = new ListNode(data);
            newNode->data = data;
            newNode->next = NULL;
            if(prev==NULL)
                head = newNode;
            else
                prev->next = newNode;
            prev = newNode;
        }
        return head;
}

void printList(ListNode *head){
    while(head!=NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

ListNode *insertion(int pos, ListNode *newNode, ListNode *head){
    if(pos==1){
        newNode->next = head;
        return newNode;
    }
    ListNode *current = head;
    int cp = 1;
    ListNode *prev = NULL;
    while(cp<pos){
        prev = current;
        current = current->next;
        cp++;
    }
    newNode->next = current;
    prev->next = newNode;
    return head; 
}

int main(){
    int n;
    cin >> n;
    ListNode *head = createList(n);
    // printList(head);
    int value, position;
    cout << "Enter value to be inserted\n";
    cin >> value;
    cout << "Enter position\n";
    cin >> position;
    ListNode *newNode = new ListNode(value);
    head  = insertion(position, newNode, head);    
    printList(head);
}