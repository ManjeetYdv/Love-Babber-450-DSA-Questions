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



void remove_duplicants(node* &head){                  //fro unordered list
    node* ptr1;
    node* ptr2;

    ptr1 = head;

    while(ptr1!=NULL and ptr1->next!=NULL){

        ptr2 = ptr1;

        while(ptr2->next!=NULL){

            if(ptr1->data == ptr2->next->data){
                 ptr2->next =  ptr2->next->next;
            }
            else{
                ptr2 = ptr2->next;
            }
        }

        ptr1 = ptr1->next;
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

    insert_l(head , 1);
    insert_l(head , 4);
    insert_l(head , 5);
    insert_l(head , 4);
    insert_l(head ,1);
   

    remove_duplicants(head);

    

    

    
    display(head);



}
