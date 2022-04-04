#include<bits/stdc++.h>
using namespace std;

vector<int> valueEqualToIndex(int arr[], int n) {
	  
	    vector<int> fixed ;
	    
	    for(int i=0 ;i<n ;i++){
	        if(arr[i]==i+1){
	            fixed.push_back(arr[i]);
	        }
	    }
	    return fixed;
	}

int main(){

    int arr[]={15, 2, 45, 12, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int>fix = valueEqualToIndex(arr , n);

    for(int i=0 ;i<fix.size();i++){
        cout<<fix[i]<<" ";
    }

}
