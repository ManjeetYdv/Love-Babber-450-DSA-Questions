#include<bits/stdc++.h>
using namespace std;


long long merge(int arr[] , int l , int mid , int r){     //merging 2 srorted arrays from l to mid and mid+1 to r
	 
    long long inversion =0 ;

	int n1 = mid-l+1;
	int n2 = r-mid;
	
	int a[n1];
	int b[n2];
	
	for(int i=0;i<n1 ; i++){
		a[i]=arr[l+i];
	}
	for(int i=0 ; i<n2 ;i++){
		b[i]=arr[mid+i+1];
	}
	
	int i=0 ;
	int j=0;
	int k=l;
	
	while(i<n1 && j<n2){
		if(a[i]>b[j]){
			
			arr[k]=b[j];
			k++;
			j++;
            inversion += n1-i;
		}
		else {
			
			arr[k]=a[i];
			k++;
			i++;
			
		}
		
		
		
	}
	
	while(i<n1){
			arr[k]=a[i];
			k++;
			i++;
	}
	while(j<n2){
		 arr[k]=b[j];
			k++;
			j++;
	}
	
	return inversion;

}

long long mergesort(int arr[] , int l ,int r){
	
     long long inv=0;

	if(l<r){
		

		int mid = (l+r)/2;
		
		inv +=mergesort(arr , l , mid);
		inv +=mergesort(arr , mid+1 , r);
		
	    inv+=merge(arr , l , mid ,r);
	
		
	}
    return inv;

	
}



int main(){
    int arr[]= {2,4,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<mergesort(arr , 0 , n-1);

    
}
