#include<iostream>
using namespace std;

int minSteps(int arr[] , int n){


    
if(arr[0]==0){
		return -1;
		
	}
	if(n==1){
		return 1;
	}
	
	int steps =arr[0];
	int maxReach =arr[0];
	int jump=1;
	
	for(int i=1 ;i<n ;i++){
		
		if(i== n-1){
			return jump;
		}
		maxReach = max(maxReach , i+arr[i]);
		steps --;
	    if(steps==0){
	    	jump++;
	    	steps = maxReach -i;
	    	
		}	
	}
	
return -1;



}
int main(){
    int arr[]={3,5,2,6,7,6,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    int jumps =minSteps(arr   , n);

    cout<<"Minimum steps to reach the end of an array : "<<jumps<<endl;

}
