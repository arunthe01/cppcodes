#include<iostream>
using namespace std;

class Node {
 public:
         int val;
         Node *next;
         Node *prev;
 public:
        Node(int val){
                this->val = val;
                this->next = nullptr;
                this->prev=nullptr;
        }
};

class linkedlist{
Node *head;
Node *tail;
public:
        linkedlist(){
                this -> head = nullptr;
                this->tail= nullptr;
        }

  void pushfront(int element){
Node *p = new Node(element);
  if(head==nullptr){
         tail = head = p;
         return;
  }

  head->prev = p;
  p->next = head;
  head = p;
}

 void pushend(int element){
        Node *p = new Node(element);
        if(tail == nullptr){
                head->next = p;
                tail = p;
                tail->prev = head;
                return;
        }

        if(head == nullptr){
                 tail= head= p;
                 return;
        }

        tail->next = p;
        p -> prev = tail;
        tail = p;

}

  void popfront(){
        if(head == nullptr){
                cout<<"stack under flow";
                tail = nullptr;
                return;
        }

        if(head == tail){
                head = tail = nullptr;
                return;
        }
        
        head  = head->next;
        head->prev = nullptr;
}

  void popend(){
        if(tail == nullptr){
                head = nullptr;
                return;
        }

        if(head == tail){
                head = tail = nullptr;
                return;
        }
      
      
      
      tail = tail->prev;
      tail->next = nullptr;
      
      
      
}

void display(){
  

  Node *p = head;

  while(p != nullptr){
          cout<<p->val<<"\t";
          p= p->next;     
  }
   
}  



};

main(){
        linkedlist l;
        Node n(0);
        l.pushfront(10);
        l.pushfront(20);
        l.pushfront(87);
        l.pushend(77);
        l.popfront();
        l.popend();
        l.display();
}
