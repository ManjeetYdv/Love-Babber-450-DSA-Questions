#include<bits/stdc++.h>
using namespace std;


string swap(string str , int i ,int l){
    
     char temp = str[l];
     str[l]=str[i];
     str[i]=temp;
     return str;

    
}
void find_permutation(string str , int l , int r){

    if(l==r){
        cout<<str<<endl;
        return;
    }

   for(int i=l ; i<=r ;i++){
       str = swap(str , l , i);
       find_permutation(str , l+1 , r);
       str = swap(str ,l , i);
   }
    

}

int main(){
    string str ="abc";
    
    
    find_permutation(str  , 0 , str.length()-1);

}
