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
    }
    current = head;
    while(current!=NULL){
        cout << current->data << " ";
        current = current->next;
    }
}