
#include <bits/stdc++.h>
using namespace std;

 
     
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int> commonElement ;
            int i=0;
            int j=0;
            int k=0;
               
               commonElement.push_back(A[n1-1]+B[n2-1]);
            while(i<n1 and j<n2 and k<n3){
             
                if(A[i]==B[j] and B[j]==C[k]){
                    
                   if(commonElement.back()!=A[i] ){
                    commonElement.push_back(A[i]);
                    }
                    i++;
                    j++;
                    k++;
                }
                else if(A[i]>B[j]){
                    j++;
                }
                else if(B[j]>C[k]){
                    k++;
                }
                else{
                    i++;
                }
            }
            commonElement.erase(commonElement.begin());
    
            return commonElement;
            
        }
void display(vector<int> s)
{   
    cout<<"Display : ";
   for(int i=0 ;i<s.size(); i++){
       cout<<s[i]<<" ";
   }
}
int main ()
{
    int ar1[] = {1, 5, 10, 20, 40, 80};
    int ar2[] = {6, 7, 20, 80, 100};
    int ar3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n1 = sizeof(ar1)/sizeof(ar1[0]);
    int n2 = sizeof(ar2)/sizeof(ar2[0]);
    int n3 = sizeof(ar3)/sizeof(ar3[0]);
 
    vector<int> common;

   common = commonElements(ar1, ar2, ar3, n1, n2, n3);
   display(common);
   cout<<endl;
   
   
} 
