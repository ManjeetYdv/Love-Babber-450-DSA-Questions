#include<iostream>
using namespace std;

void kthSmallestAndLargest(int arr[] , int n  , int k){

    for(int i=0 ;i<n-1 ;i++){                       //bubble sort
        for(int j=0 ;j<n-1-i ;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);

            }
        }
    }

    cout<<k<<"th smallest : "<<arr[k-1]<<endl;
    cout<<k<<"th biggest : "<<arr[n-k];



}
int main(){
    

int arr[]={5,4,3,2,1};
int n = sizeof(arr)/sizeof(arr[0]);

kthSmallestAndLargest(arr , n , 2);
}
