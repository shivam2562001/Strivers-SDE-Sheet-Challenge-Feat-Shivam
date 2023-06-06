#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
  vector<vector<int>> result;
    
    sort(intervals.begin(),intervals.end());
    
 
          
    for(int i=0;i<intervals.size();i++){
         
         if(result.size()!=0 && result[result.size()-1][1]>=intervals[i][0]) {
           if(result[result.size()-1][1]<=intervals[i][1])
            result[result.size()-1][1]=intervals[i][1];
             
         }
         else{
        vector<int> ans;
        ans.push_back(intervals[i][0]);
        ans.push_back(intervals[i][1]);
        result.push_back(ans);
       }
    }
    


   return result;

}