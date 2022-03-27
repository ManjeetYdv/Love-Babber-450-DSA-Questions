#include<bits/stdc++.h>
using namespace std;

void printDuplicates(string str){

   int countS[26]={0};

for(int i=0 ;i<str.length();i++){

   countS[str[i]-'a']++;
} 
 
for(int i=0 ;i<26; i++){

    if(countS[i]>1){
       cout<<char(i+'a')<<" appears "<<countS[i]<<" times"<<endl;;
    }
}


}

int main(){
    string str="abbccc";
    cout<<"Duplicates in "<<str<<" : "<<endl;
    printDuplicates(str);

}
