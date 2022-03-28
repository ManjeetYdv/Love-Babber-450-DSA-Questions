#include<bits/stdc++.h>
using namespace std;

 vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> vec;
        vector<int> pair;
        
        int start = intervals[0][0];
        int end = intervals[0][1];
        
        for(int i=1 ;i<intervals.size();i++){
            
            if(end<intervals[i][0] || start>intervals[i][1]){
                
                pair.push_back(start);
                pair.push_back(end);
                vec.push_back(pair);
                pair.clear();
                
                start = intervals[i][0];
                end = intervals[i][1];
            }
            else if(end>=intervals[i][0] and start<=intervals[i][1]){
                if(end< intervals[i][1]){
                    end= intervals[i][1];
                    
                }
                if(start>intervals[i][0]){
                    start = intervals[i][0];
                }
            }
            
            
        }
        pair.push_back(start);
        pair.push_back(end);
        vec.push_back(pair);
        
        return vec;
    }

  void display(vector<vector<int>> abj){
      for(int i=0 ;i<abj.size();i++){
          cout<<"["<<abj[i][0]<<","<<abj[i][1]<<"] ";
      }
      cout<<endl;
  }

    int main(){
        vector<vector<int>> intervalss;
        vector<int> abj;

        abj.push_back(1);
        abj.push_back(3);
        intervalss.push_back(abj);
        abj.clear();

        abj.push_back(2);
        abj.push_back(4);
        intervalss.push_back(abj);
        abj.clear();

        abj.push_back(5);
        abj.push_back(6);
        intervalss.push_back(abj);
        abj.clear();
        
        cout<<"Intervals: ";
        display(intervalss);
        vector<vector<int>> merged = merge(intervalss);
        cout<<"Merged Intervals: ";
        display(merged);

 
    }
