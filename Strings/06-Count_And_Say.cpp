#include<bits/stdc++.h>
using namespace std;

string countAndSay(int n){
   string a ="1";
   string b= "";
   int count=1;


   if(n==1){
       return a;


   }

   for(int i=2; i<=n ;i++){
       b="";
       for(int j=0 ;j<a.length() ;j++){
           if(a[j]==a[j+1]){
               count++;

           }
           else{
               b +=to_string(count) +a[j];
               count=1;

           }

       }
       a=b;
     

   }
 

 return a;
}



int main(){

    cout<<countAndSay(5);


}
