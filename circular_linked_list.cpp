#include <iostream>
using namespace std;

struct node{
    int val;
    node *next;
    node(int x){
        this->val=x;
        this->next=NULL;
        
    }
    
    node* add_front (int x , node* head){
        node *temp = head;
        node *p = new node(x);
        if(head==NULL){
            head=p;
            return head;
        }
        while(temp->next != head){
            temp=temp->next;
        }
        
        temp->next=p;
        p->next=head;
        return p;
    }
    
    node* add_end( int x , node *head ){
        node *p = new node(x);
        node *temp = head;
        if(head==NULL){
            head= p;
            return head;
        }
        while(temp->next != head){
            temp=temp->next;
        }
        temp->next = p;
        p->next = head;
        return head;
        
    }
    
    node* del_front(node* head){
        if(head==NULL){
            return NULL;
        }
        node *temp = head;
        while(temp->next != head){
            temp=temp->next;
        }
        node *p = temp->next;
        temp->next=head->next;
        delete p;
        return head->next;
    }
    
    node *del_end(node *head){
        node *temp = head;
       if(temp->next == head){
           delete head;
           return NULL;
       }
       
       while(temp->next->next != head){
           temp=temp->next;
       }
       
       node *p = temp->next;
       temp->next = head;
       delete p;
       return temp->next;
    }
    
    node* add_k(int x , node* head ,int pos){
        int i=1;
        node *temp = head;
        node *p = new node(x);
        
            while(i<pos-1){
                temp=temp->next;
                i++;
            }
            
            node *temp1 = temp->next;
            temp->next=p;
            p->next= temp1;
            
            return head;
            
    }
    
    node* del_k( node* head ,int pos){
        int i=1;
        node *temp = head;

            while(i<pos-1){
                temp=temp->next;
                i++;
            }
            
            node *temp1 = temp->next;
            temp->next=temp1->next;
            delete temp1;
            return head;
            
    }
    
    
    void print(node *head){
        node *temp = head;
        while(temp->next != head){
            cout<<temp->val<<"\t";
            temp=temp->next;
        }
        
        cout<<temp->val;
        
    }
};

int main() {
    node c(0);
	node *head = new node(10);
	head->next=new node(20);
	head->next->next=new node(30);
	head->next->next->next=head;
	head = c.add_front(5,head);
	head= c.add_end(6,head);
	c.print(head);
	cout<<"\n";
	head=c.add_k(9,head,3);
	c.print(head);
	head=c.del_k(head,3);
	cout<<"\n";
	c.print(head);
}
