#include<bits/stdc++.h>
using namespace std;

string countNsay(int n){
  
      if(n==1){
          return "1";
      }
     string a = "1";
     string b="";
     int k=0;
     for(int i=2;i<=n ;i++){
          
          for(int i=0 ;i<a.length();i++){
                
               if(a[i]==a[i+1]){
                   k++;
               }
               else if(a[i]!=a[i+1]){

                   k++;
                   b+=to_string(k)+a[i];
                   k=0;

               }

          }

          a=b;
          b="";

          
     }
     return a;
}

int main(){

   
    string s = countNsay(2);
    cout<<s;
}
