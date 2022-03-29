#include<bits/stdc++.h>
using namespace std;

bool shuffleCheck(string str1 , string str2 , string result){

    int x =0;
    int y=0;
    
    
    if(str1.length()+str2.length()!= result.length()){
        return false;
    }

    for(int i=0 ; i< result.length() ;i++){
      
       if(str1.find(result[i])>=0 and str1.find(result[i])<str1.length() ){
           x=x+1;

       }
       if(str2.find(result[i])>=0 and str2.find(result[i])<str2.length() ) {
           y=y+1;
       }
    }

    if(x+y==result.length()){
        return true;
    }

    return false;
    

}

int main(){

    string str1 = "ab";
    string str2 = "cd";
    string result = "dcab";

    if(shuffleCheck(str1 , str2 , result)){
        cout<<"yes its a suffle ";

    }
    else{
        cout<<"not a suffle ";

    }
}
