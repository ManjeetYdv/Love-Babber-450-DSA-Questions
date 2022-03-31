#include<iostream>
using namespace std;

void rotateRight(int arr[] , int l , int m){
	
	int temp= arr[m];
	for(int i=m ;i>l ; i--){
		arr[i]=arr[i-1];
	}
	arr[l]=temp;
}



void reArrange(int arr[] , int n){


    int wrongPos =-1;

    for(int i=0 ;i<n ;i++){

        if(wrongPos!=-1){

            if( (arr[wrongPos]>=0 and arr[i]<0 ) || (arr[wrongPos]<0 and arr[i]>=0) ){

                rotateRight(arr , wrongPos , i);

                if(i-wrongPos>=2){
                    wrongPos+=2;
                }
                else{
                    wrongPos=-1;
                }

            }
        }
        if(wrongPos==-1){
            if( (arr[i]>=0 and i%2==0) || (arr[i]<0 and i%2!=0)){
                wrongPos=i;
            }
        }
    }

    

}

int main(){

    int arr[]= {1, 2, 3, -4, -1, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    reArrange(arr , n);

    for(int i=0 ;i<n ;i++){
        cout<<arr[i]<<" ";
    }
}

