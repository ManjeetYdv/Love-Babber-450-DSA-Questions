#include<bits/stdc++.h>
using namespace std;

// Split the binary string into substrings with equal number of 0s and 1s

vector<string> substrs(string str){

    vector<string>s;
    int count0=0;
    int count1=0;
    
    int idx=0;

    for(int i=0 ;i<str.size(); i++){
        
        if(str[i]=='0'){
            count0++;
        }
        else{
            count1++;
        }

        if(count0==count1){
            s.push_back(str.substr(idx , count0+count1));
            idx =i+1;
            count0=0;
            count1=0;
        }

    }

    return s;




}

int main(){
    string str ="0011000111";
    vector<string> substring = substrs(str);
    
    if(substring.size()==0){
        cout<<"Cant split into equal substr of equal zeros and ones";

    }
    else{
      for(int i=0;i<substring.size() ;i++){
        cout<<substring[i]<<" ";
    } 
    }
   
}
