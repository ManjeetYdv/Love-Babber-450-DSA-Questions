#include<iostream>
using namespace std;

void sort012(int arr[], int n)
{
   int zeros=0;
   int ones=0;
   int twos=0;
   
   for(int i=0 ;i<n ;i++){
       if(arr[i]==0){
           zeros++;
       }
       else if(arr[i]==1){
           ones++;
       }
       else if(arr[i]==2){
           twos++;
       }
   }
   int k=0;
   for(int i=0 ;i<zeros ;i++){
       arr[k++]=0;
   }
   
   for(int i=0 ;i<ones ;i++){
       arr[k++]=1;
   }
   for(int i=0 ;i<twos ;i++){
       arr[k++]=2;
   }
}

int main(){
    int arr[]={0,1,2 ,0 , 2 ,1 ,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort012(arr , n);

    cout<<"Sorted array : ";
    for(int i=0 ;i<n ;i++){
        cout<<arr[i]<<" ";
    }
}