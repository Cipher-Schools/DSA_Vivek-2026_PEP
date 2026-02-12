# include <bits/stdc++.h>
using namespace std;

class ListNode{
    public:
        int data;
        ListNode * next;
        ListNode* prev;
    
        ListNode(int data){
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }
};

ListNode* insert(ListNode* head, int pos, int value){
    ListNode* newNode = new ListNode(value);
    if(pos==1){
        newNode->next = head;
        if(head)
            head->prev = newNode;
        return newNode;
    }
    if(head==NULL)
        return NULL;
    int cp = 2;
    ListNode * current = head;
    while(current!=NULL && cp<pos){
        current = current->next;
        cp++;
    }
    if(cp==pos && current!=NULL){
        newNode->prev = current;
        newNode->next = current->next;
         if(current->next){
            current->next->prev = newNode;
         }  
         current->next = newNode;
    }
}

ListNode* createList(n){
    ListNode* p;
    for(int i=1; i<=n; i++){
        int val;
        cin >> val;
        ListNode* current = new ListNode(val);
        if(i==1){
            head = current;
        }
        else{
            p->next = current;
            current->prev = p;
        }
        p = current;
    }
}


int main(){
    int n;
    cin >> n;
    ListNode* head;
    head = createList(n);

}