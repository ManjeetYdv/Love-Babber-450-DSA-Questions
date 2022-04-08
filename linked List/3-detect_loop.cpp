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

bool hasLoop(node* head){
   
   node* fast = head;
   node* slow = head;
   

   while(fast!=NULL and fast->next!=NULL){
       slow = slow->next;
       fast = fast->next->next;

       if(slow==fast){
           return true;
       }
   }
   return false;;

}

void display(node *head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
  
int main(){
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    head->next->next->next->next = head->next->next->next;

    cout<<hasLoop(head);





   



}
