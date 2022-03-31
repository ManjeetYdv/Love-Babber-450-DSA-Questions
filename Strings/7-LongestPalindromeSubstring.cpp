#include<bits/stdc++.h>
using namespace std;

int ExpandFromCenter(string str  ,int i , int j){
   
   while(i>=0 and j<str.length()){
       
       if(str[i]==str[j]){
           i--;
           j++;
       }
       else{
           break;
       }
   }
   return j-i-1;


}
string longestPalindrome(string str){

    int start=0;
    int end= 0;

    for(int i=0 ; i<str.length() ;i++){
        int len1= ExpandFromCenter(str , i , i+1);
        int len2 = ExpandFromCenter(str , i , i);
        int len = max(len1  ,  len2);

        if(end-start < len){
            start = i-(len-1)/2;
            end = i+len/2;

        }
        

    }
    return str.substr(start , end-start+1);
}

int main(){
    string str = "aaaabbaa";
    string pal = longestPalindrome(str);
    cout<<pal;

}
