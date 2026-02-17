// https://leetcode.com/problems/design-circular-queue/description/

class MyCircularQueue {
public:
    int front;
    int rear;
    int capacity;
    vector<int> v;

    MyCircularQueue(int k) {
        front = 0;
        rear = 0;
        capacity = k+1;
        v.resize(k+1);
    }
    
    bool enQueue(int value) {
        if(isFull())
            return false;
        v[rear] = value;
        rear = (rear+1)%capacity;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty())
            return false;
        front = (front+1)%capacity;
        return true;
    }
    
    int Front() {
        if(isEmpty())
            return -1;
        return v[front];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        int index =(rear-1+capacity)%capacity;
        return v[index];
    }
    
    bool isEmpty() {
        return (front==rear);
    }
    
    bool isFull() {
        return (rear+1)%capacity ==front;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */