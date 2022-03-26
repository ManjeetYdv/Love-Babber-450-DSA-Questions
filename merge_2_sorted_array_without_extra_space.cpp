#include<iostream>
using namespace std;
// Example 1:

// Input:
// N = 4, M = 5
// arr1[] = {1, 3, 5, 7}
// arr2[] = {0, 2, 6, 8, 9}
// Output: 0 1 2 3 5 6 7 8 9
// Explanation: Since you can't use any 
// extra space, modify the given arrays
// to form 
// arr1[] = {0, 1, 2, 3}
// arr2[] = {5, 6, 7, 8, 9}

void sorta2(int arr2[] , int m){
      int j=0;
	  while(j+1<m and arr2[j]>arr2[j+1]){
	      swap(arr2[j] , arr2[j+1]);
	      j++;
    }
    }

void mergeSorted(int arr1[], int arr2[], int n, int m){
    for(int i=0;i<n ;i++){
	        
	        if(arr1[i]>arr2[0]){
	            
	            swap(arr1[i] , arr2[0]);
	            
	            sorta2(arr2 , m);
	             
	            } 
	        }

}

int main(){
   int arr1[] = {1, 3, 5, 7};
   int arr2[] = {0, 2, 6, 8, 9};

   mergeSorted(arr1 , arr2 ,4 , 5);
   
   cout<<"merged sorted  : ";
   for(int i= 0;i<4 ;i++){
       cout<<arr1[i]<<" ";
   }
    for(int i= 0;i<5 ;i++){
       cout<<arr2[i]<<" ";
   }

}