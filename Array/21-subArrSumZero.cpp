#include<bits/stdc++.h>
using namespace std;

bool subArrZero(int arr[] , int n)
{
   
   unordered_map<int , int> m;
   
   int sum=0;

   for(int i=0 ; i<n ;i++){
       sum+=arr[i];

       if(sum==0 or arr[i]==0 or m[sum]){
           return true;
       }
       else{
           m[sum]=1;
       }
   }
   return false;



}

int main(){
    int arr[]={4, 2 ,-3 ,1 ,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    if(subArrZero(arr , n)){
        cout<<"yes boi";

    }
    else{
        cout<<"nah nigga";
    }
}
