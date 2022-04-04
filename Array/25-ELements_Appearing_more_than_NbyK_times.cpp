#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> ELementCount(int arr[] , int n ,int k){
    
    vector<vector<int>> vec;
    vector<int> pair;

    int maxi = arr[0];
    for(int i=1 ;i<n ;i++){
        if(arr[i]>maxi){
            maxi =arr[i];
        }
    }

    int count[maxi+1]={0};

    for(int i=0 ;i<n ;i++){
        count[arr[i]]++;

    }

    for(int i= 0;i<maxi+1 ;i++){
        if(count[i]>n/k){
           pair.push_back(i);
           pair.push_back(count[i]);
           vec.push_back(pair);
           pair.clear();
           count[i]=0;

        }
    }

    return vec;





}

int main(){


    int arr[] = {3, 1, 2, 2, 1, 2, 3, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

   vector<vector<int>>S = ELementCount(arr , n , 4);

    for(int i=0 ;i<S.size();i++){
        cout<<S[i][0]<<" "<<S[i][1]<<" times "<<endl;
    }
}
