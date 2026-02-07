# include <bits/stdc++.h>
using namespace std;

// class LinkList{
//     ListNode *head;
//     LinkList(head){
//         this->head = head;

//     }
//     void reverse_list(){
//         // Reversal of linklist
//         current = head;
//         ListNode* temp = NULL;
//         ListNode* prev = NULL;
//         while(current!=NULL){
//             temp = current->next;  // taking next node's address 
//             current->next = prev;  // reversing next pointer of current node
//             prev = current; // taking current node as prev as it is reversed so now we will move to the next node
//             current = temp; // now as this node is done so taking next node to be reversed(using temp) which will be reversed
//         }
//         head = prev;
//     }
//     bool search(int data){
//         ListNode *current = head;
//         while(current!=NULL){
//             if(current->data==data)
//                 return true;
//         }
//         return false;
//     }
// }

class ListNode{
    public:
        int data;
        ListNode * next;
    
        ListNode(int data){
            this->data = data;
            this->next = NULL;
        }
};

bool search(ListNode *head, int value){
        ListNode *current = head;
        while(current!=NULL){
            if(current->data==data)
                return true;
        }
        return false;
}

int main(){
    int n;
    cin >> n;
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
        if(search(head, value))
            cout << "Yes the node exists\n";
        else 
            cout << "NO node exist with this value\n";
    }


    // printing part
    current = head;
    while(current!=NULL){
        cout << current->data << " ";
        current = current->next;
    }
}