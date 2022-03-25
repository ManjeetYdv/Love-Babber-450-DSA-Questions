#include<iostream>
using namespace std;

int* maxmin(int arr[] , int n){

    int* a = new int[2];

    int max = arr[0];
    int min=arr[0];
      
      for(int i=0 ;i<n ;i++){
          
          if(arr[i]>max){
              max=arr[i];
          }
          
          if(arr[i]<min){
              min=arr[i];
          }
      }

      a[0]=max;
      a[1]=min;
      
      return a;
}
int main(){

    int arr[]={2,3,4,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int* pt = maxmin(arr , n);
    
    cout<<"Max element : "<<pt[0];
    cout<<endl;
    cout<<"Min element : "<<pt[1];
}
