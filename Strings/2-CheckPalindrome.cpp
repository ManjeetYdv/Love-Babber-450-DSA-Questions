#include<bits/stdc++.h>
using namespace std;

int isPalindrome(string s){
	 for(int i=0 ; i<s.length()/2 ;i++){
      if(s[i]!=s[s.length()-1-i])
      return 0;
  }
 return 1;
}


int main(){
    string str="abba";
    
    cout<<isPalindrome(str);
    
}