#include<bits/stdc++.h>
using namespace std;

int longestCOnsecutiveSUbsequence(int arr[] , int n){
    unordered_map<int , int >a;

    int maxi = arr[0];
    int mini = arr[0];

    for(int i=0 ; i<n ;i++){
        a[arr[i]]=1;

        maxi= max(arr[i] ,maxi);
        mini= min(arr[i] ,mini);
    }

    int ans=0;
    int curr_len=0;

    for(int i=mini ;i<=maxi ;i++){
        if(a.find(i)!=a.end()){
            curr_len++;
        }
        else{
            curr_len=0;
        }
        ans = max(ans , curr_len);
    }
   return ans;
}

int main(){
    int arr[] = {2,6,1,9,4,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<longestCOnsecutiveSUbsequence(arr , n);
    
    
    
}
