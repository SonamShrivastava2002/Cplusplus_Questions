#include <bits/stdc++.h> 
using namespace std;
//TC - O(9^m),SC - O(1);
bool isSafe(int v,int r,int c,vector<vector<int>>& sudoku){
    for(int i=0;i<9;i++){
        //row
        if(sudoku[r][i] == v){
            return false;
        }
        //col
        if(sudoku[i][c] == v){
            return false;
        }
        //3*3 matrix 
        if(sudoku[3*(r/3) + (i/3)][3*(c/3) + i%3] == v){
            return false;
        }
    }
    return true;
}
bool solve(vector<vector<int>>& sudoku){
    int n = 9;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(sudoku[i][j] == 0){
                for(int val = 1;val<=9;val++){
                    if(isSafe(val,i,j,sudoku)){
                        sudoku[i][j] = val;
                        //recursive call
                        bool nextSolution = solve(sudoku);
                        if(nextSolution){
                            return true;
                        }
                        else{
                            //backtrack
                            sudoku[i][j] = 0;
                        }
                    }
                }
                return false;
            }
        }
    }
}
void solveSudoku(vector<vector<int>>& sudoku){
    // Just fill the values in the given matrix
    solve(sudoku);
}