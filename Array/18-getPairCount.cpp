#include<iostream>
using namespace std;


int getPairsCount(int arr[], int n, int k) {
        
        int count=0;
        
        
        for(int i =0 ;i<n ; i++){
            
            int high =n-1;
            
            while(high>i ){
                if(arr[i] + arr[high] == k){
                    count++;
                }
                high--;
            }
            
        }
        return count;
        
        
    }

int main(){

    int arr[]= {1, 5, 7, 1};
    int n = sizeof(arr)/sizeof(arr[0]);


   cout<<getPairsCount(arr , n , 6);







}
