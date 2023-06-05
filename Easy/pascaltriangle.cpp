#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{    int numRows= n;
     vector<vector<long long int>> nums(numRows); 
   

         for(int i=0;i<numRows;i++){
             nums[i].resize(i+1);

             nums[i][0]=nums[i][i]=1;

             for(int j=1;j<i;j++){
                 nums[i][j]=nums[i-1][j] + nums[i-1][j-1];
             }
         }

         

        return nums;
}