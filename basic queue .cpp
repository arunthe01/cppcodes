#include <iostream>
using namespace std;

class queue{
    int *arr;
    int head;
    int tail;                           //basic queue
    int size;
    int capacity;
    public:
        queue(int cap){
            capacity=cap;
            arr = new int(capacity);
            head=tail=0;
            size=0;
        }
    void enqueue(int x){
        if(capacity==size){
            return;
        }
            arr[tail]=x;
            tail++;
            size++;
            if(size==3)
            cout<<arr[0]<<arr[1]<<arr[2];
            
    }
    
    void dequeue (){
        if(size==0){
            return;
        }
        int index=size-1;
        for(int i =1; i<=index;i++)
            arr[i-1]=arr[i];                      //basic queue api by arun emmidi
            size=size-1;
        }

    
    void display(){
        int i =0;
       while(i<size){
           cout<<arr[i]<<"\t";
           i++;
       }
    }
    
    void peek(){
        cout<<arr[head];
    }
    
    void isempty(){
        if(size>capacity){
        cout<<"false";
        }
        else
        cout<<"true";
        
    }
};

int main() {
  queue q(4);
  q.enqueue(15);
   q.enqueue(5);
   q.display();
   cout<<"\n";
   q.dequeue();
   q.display();}
