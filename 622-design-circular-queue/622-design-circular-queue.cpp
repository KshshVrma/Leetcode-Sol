class MyCircularQueue {
public:
    int front;
    int rear;
   vector<int>arr;
    int size;
    int max;
    MyCircularQueue(int k) {
         front=-1;
         rear=-1;
        
             arr.resize(k);
        
         size=0;
         max=k;
    }
    
    bool enQueue(int value) {
        if(size==max){
            return false;
        }
        if(size==0){
front=0;
            rear=0;size++;
            
            arr[front]=value;
            return true;
        }
        rear=(rear+1)%max;
        arr[rear]=value;
        size++;
        return true;
    }
    
    bool deQueue() {
        if(size==0){
            return 0;
            
        }
         if(size==1){
             front=-1;
             rear=-1;
             size=0;
             return true;
         }
        size--;
        front=(front+1)%max;
        return true;
        
    }
    
    int Front() {
         if (isEmpty()) return -1;
        return arr[front];
    }
    
    int Rear() {
         if (isEmpty()) return -1;
        return arr[rear];
    }
    
    bool isEmpty() {
        
        return size==0;
    }
    
    bool isFull() {
        return size==max;
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