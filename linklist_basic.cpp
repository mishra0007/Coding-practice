#include <stdio.h>
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

struct node *head=NULL, *ptr=NULL, *p=NULL;

int getlen(){
    int c = 0;
    p = head;
    while(p!=NULL){
        p=p->next;
        c++;
    }
    return c;
}

struct node* insertBegin(int val){
    if(head==NULL){
        ptr = (struct node*)malloc(sizeof(struct node));
        ptr->data = val;
        ptr->next = NULL;
        head=ptr;
    }
    else{
        ptr = (struct node*)malloc(sizeof(struct node));
        ptr->data = val;
        ptr->next=head;
        head=ptr;
    }
    return head;
}

struct node* insertEnd(int val){
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->next=NULL;
    
    p=head;
    while(p->next!=NULL)
        p=p->next;
    p->next=ptr;
    return head;
}

struct node* deleteEnd(){
    p=head;
    while(p->next->next!=NULL)
        p=p->next;
    p->next=NULL;
    return head;
}

struct node* deleteBegin(){
    p=head;
    head=head->next;
    free(p);
    return head;
}

struct node* insertPos(int val, int pos){
    if(pos-1>getlen()){
        cout<<"Exceeded the size of the list"<<endl;
    }
    else{
        if(pos==1){
            insertBegin(val);
        }
        else{
            p=head; 
            int c=1;
            while(c < pos-1){
                p=p->next;
                c++;
            }
    
            ptr = (struct node*)malloc(sizeof(struct node));
            ptr->data=val;
            ptr->next=p->next;
            p->next=ptr;
        }
    }
    return head;
}
//1 2 3 4p -> 5 -> 6 7   

struct node* reverselist(struct node* head){
    
    if(head==NULL || head->next==NULL)
        return head;
    
    struct node * newhead = reverselist(head->next);
    head->next->next = head; 
    head->next=NULL;         
                            
    return(newhead);
}


struct node* display(){
    p=head;
    while(p!=NULL){
        cout<<p->data<<" -> ";
        p=p->next;
    }
    cout<<"NULL"<<endl;
    return head;
}



int main()
{
    head = insertBegin(5);
    head = insertBegin(25);
    head = insertEnd(53);
    head = insertEnd(52);
    head = display();
    
    head = deleteEnd();
    head = deleteBegin();
    head = display();
    
    head = insertPos(111,3);
    head = display();
    
    head = reverselist(head);
    head = display();
    return 0;
}