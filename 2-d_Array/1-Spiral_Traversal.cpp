#include<iostream>
using namespace std;


void spiralTraversal(int x , int y , int arr[100][100]){
    
    int k=0;       //starting row index
    int l=0;       //starting col index
    int m= x;      //last row index
    int n= y;      //last column index

    while(k<m and l<n){
      
      for(int i=l ;i<n ;i++){
          cout<<arr[k][i]<<" ";
      }
      k++;

      for(int i=k ; i<m ;i++){
          cout<<arr[i][n-1]<<" ";
      }
      n--;

      if(k<m){
          for(int i= n-1 ;i>=l ;i--){
              cout<<arr[m-1][i]<<" ";
          }
          m--;
      }
      if(l<n){
          for(int i=m-1 ;i>=k ;i--){
              cout<<arr[l][i]<<" ";
          }
          l++;
      }
         
    }
   
}

int main(){

    int arr[100][100] = { { 1, 2, 3, 4, 5, 6 },
                    { 7, 8, 9, 10, 11, 12 },
                    { 13, 14, 15, 16, 17, 18 } };

    spiralTraversal(3 , 6 ,arr);


}
