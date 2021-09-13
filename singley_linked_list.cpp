#include<iostream>
using namespace std;

class Node {
public:
	int val;
	Node *next;
	Node(int val){
		this->val=val;
		this->next=nullptr;
	}
};

class Linked_list{
public:
	Node *head;
	Node *tail;
	
	Linked_list(){
		this->head=nullptr;
		this->tail=nullptr;
	}
	
	void push_front(int x){
		Node *p = new Node(x);
		
		if(head==nullptr){
			head=tail=p;
			return;
		}
		p->next=head;
		head=p;
	}
	
	void push_end(int x){
		Node *p = new Node( x);
		
		if(head == nullptr){
			head=tail=p;
			return;
		}
		if(tail== nullptr){
			head->next=p;
			tail=p;
			return;
		}
		tail->next=p;
		tail=p;
			
	}
    void pop_front(){
    	if(head==nullptr){
    		tail==nullptr;
    		cout<<"stack under flow";
    		return;
		}
		head=head->next;
	}
	
	void pop_end(){
        if(tail == nullptr){
            cout<<"List underflow"<<endl;
            return;
        }

        if(head == tail){
            head = tail = nullptr;
            return;
        }

        Node *p = head;

        while(p->next!=tail){
            p=p->next;
        }

        p->next = nullptr;
        tail = p;

    }
	
	
	
	void display(){
		Node *p = head;
		while(p != nullptr){
			cout<<p->val<<"\t";
			p=p->next;
		}
		cout<<"\n";
	}

};

main(){
	Node n(0);
	Linked_list l;
	l.push_end(100);
    l.push_end(1000);
    l.push_end(10000);
    l.push_front(10);
    l.display();
    l.pop_end();
    l.pop_front();
    l.display();
	
}
