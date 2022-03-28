#include<iostream>
#include<string>
using namespace std;


bool isRotations(string str1 , string str2){
     
   if(str1.length()!=str2.length()){
       return false;
   }

   string temp= str1+str1;
   
   if(temp.find(str2)>=0 and temp.find(str2)<=temp.length()){
       return true;

   }
   
   return false;

}

int main(){

    string str1 = "abcde";
    string str2 = "cdeab";

    if(isRotations(str1 , str2)){
        cout<<"yes str2 is a rotation of str1";
    }
    else{
        cout<<"no str2 is not a rotation of str1";
    }
}
