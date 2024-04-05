#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //TC - O(m*n(m+n))
    // int rowCount(int i,int n,int m,vector<vector<int>> grid){
    //     int onesRow = 0,zerosRow = 0;
    //     for(int j=0;j<n;j++){
    //         if(grid[i][j] == 0){
    //             zerosRow++;
    //         }
    //         else{
    //             onesRow++;
    //         }
    //     }
    //     int ans = onesRow - zerosRow;
    //     return ans;
    // }
    // int colCount(int j,int n,int m,vector<vector<int>> grid){
    //     int onesCol = 0,zerosCol = 0;
    //     for(int i=0;i<m;i++){
    //         if(grid[i][j] == 0){
    //             zerosCol++;
    //         }
    //         else{
    //             onesCol++;
    //         }
    //     }
    //     int ans = onesCol - zerosCol;
    //     return ans;
    // }
    // vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
    //     int m = grid.size();
    //     int n = grid[0].size();
    //     vector<vector<int>> diff;
    //     for(int i=0;i<m;i++){
    //         for(int j=0;j<n;j++){
    //             int colDiff = colCount(j,n,m,grid);
    //             int rowDiff = rowCount(i,n,m,grid);
    //             diff[i][j] = colDiff + rowDiff;
    //         }
    //     }
    //     return diff;
    // }

    //TC - O(m*n)
    vector<vector<int>> oneMinusZeros(vector<vector<int>> &grid){
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> diff(m,vector<int> (n,0));
        //for rows
        unordered_map<int,int> mpRow;
        for(int i=0;i<m;i++){
            int onesRow = 0,zerosRow = 0;
            for(int j=0;j<n;j++){
                if(grid[i][j] == 0){
                    zerosRow++;
                }
                else{
                    onesRow++;
                }    
            }
            int ans = onesRow - zerosRow;
            mpRow[i] = ans;
        }
        //for columns
        unordered_map<int,int> mpCol;
        for(int j=0;j<n;j++){
            int onesCol = 0,zerosCol = 0;
            for(int i=0;i<m;i++){
                if(grid[i][j] == 0){
                    zerosCol++;
                }
                else{
                    onesCol++;
                }    
            }
            int ans = onesCol - zerosCol;
            mpCol[j] = ans;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int colDiff = mpCol[j];
                int rowDiff = mpRow[i];
                diff[i][j] = colDiff + rowDiff;
            }
        }
        return diff;
    }
};