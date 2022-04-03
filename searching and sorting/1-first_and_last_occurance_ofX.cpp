#include<bits/stdc++.h>
using namespace std;

vector<int> find(int arr[], int n , int x )
{
    vector<int>element;
    
      element ={-1 , -1};
    
    for(int i=0 ;i<n ;i++){
        if(arr[i]==x){
            element[0]=i;
            break;
        }
    }
    
    for(int i=n-1; i>=0 ;i--){
        if(arr[i]==x){
            element[1]= i;
            break;
        }
    }
    
    
    return element;
}


int main(){

    int arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 };
    int n = sizeof(arr)/sizeof(arr[0]);

    int x=5;
    vector<int> ans= find(arr , n , x);

    cout<<ans[0]<<" "<<ans[1];
    
    
    
}
