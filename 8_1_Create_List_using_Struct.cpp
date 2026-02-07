# include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int data;
    struct ListNode* next;
};

int main(){
    int n;
    cin >> n;
    struct ListNode* head;
    struct ListNode* current;
    for(int i=1; i<=n; i++){
        int data;
        struct ListNode* newNode = new ListNode();
        cin >> data;
        newNode->data = data;
        newNode->next = NULL;
        if(i==1){
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