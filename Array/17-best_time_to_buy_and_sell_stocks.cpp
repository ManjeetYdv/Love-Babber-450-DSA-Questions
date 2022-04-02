#include<bits/stdc++.h>
using namespace std;


int maxProfit(vector<int> arr){

 
        int least_till_now = INT_MAX;
        int profit_today=0;
        int max_profit=0;
        
        for(int i=0 ;i<arr.size() ;i++){
            if(arr[i]<least_till_now){
                least_till_now = arr[i];
                
            }
            profit_today = arr[i]-least_till_now;
            
            max_profit = max(max_profit , profit_today);
            
        }
        
        return max_profit;

}

int main(){
    vector<int> ans= {7,1,5,3,6,4};
    cout<<maxProfit(ans);

}
