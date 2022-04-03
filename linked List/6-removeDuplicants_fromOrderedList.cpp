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

void removeDuplicants(node* &head){

    node* temp = head;

    if(head==NULL){
        return;
    }

    while(temp->next!=NULL){
        if(temp->data == temp->next->data){
            temp->next = temp->next->next;
        }

        else{
            temp =temp->next;
        }
    }

    
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

    insert_l(head , 3);
    insert_l(head , 3);
    insert_l(head , 3);
    insert_l(head , 3);
    insert_l(head , 3);

    removeDuplicants(head);

    

    

    
    display(head);



}
