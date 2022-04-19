#include<bits/stdc++.h>
using namespace std;

class node{

    public :
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }

};

void insert_s(node* &head , int val){
    node* n = new node(val);
    n->next = head;
    head= n;

}

void insert_l(node* &head , int val){                          //insert at last
     
   node* toInsert = new node(val);

   if(head==NULL){
       insert_s(head , val);
        return;  
   }

   node* temp= head;

   while(temp->next!=NULL){
       temp = temp->next;
   }

   temp->next = toInsert;


}

node* reverseList(node* &head){
  
  node* prevptr=NULL;
  node* curr= head;
  node* nextptr;

  while(curr!=NULL){
      nextptr= curr->next;
      curr->next = prevptr;

      prevptr=curr;
      curr= nextptr;


  }

  return prevptr;
   
}

node* reverseRecurssive(node* &head){

    if(head==NULL  || head->next==NULL){
        return head;
    } 

    node* newHead = reverseRecurssive(head->next);

    node* headNext =head->next;
    headNext->next = head;
    head->next=NULL;

    return newHead;




}

void display(node* head){

    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    node* head = NULL;

    insert_l(head , 1);
    insert_l(head , 2);
    insert_l(head , 3);
    insert_l(head , 4);
    insert_l(head , 5);

    head=reverseRecurssive(head);

    

    
    display(head);



}
