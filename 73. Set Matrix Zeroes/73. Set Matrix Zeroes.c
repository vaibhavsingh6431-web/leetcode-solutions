/*
 * Problem: 73. Set Matrix Zeroes
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/set-matrix-zeroes/submissions/1927785866/
 * Language: c
 * Date: 2026-02-22
 */

void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    
    int m = matrixSize;
    int n = matrixColSize[0];
    
    int firstRowZero = 0;
    int firstColZero = 0;

    // Check first column
    for(int i = 0; i < m; i++){
        if(matrix[i][0] == 0){
            firstColZero = 1;
            break;
        }
    }

    // Check first row
    for(int j = 0; j < n; j++){
        if(matrix[0][j] == 0){
            firstRowZero = 1;
            break;
        }
    }

    // Use first row & col as markers
    for(int i = 1; i < m; i++){
        for(int j = 1; j < n; j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // Set rows to zero
    for(int i = 1; i < m; i++){
        if(matrix[i][0] == 0){
            for(int j = 1; j < n; j++){
                matrix[i][j] = 0;
            }
        }
    }

    // Set columns to zero
    for(int j = 1; j < n; j++){
        if(matrix[0][j] == 0){
            for(int i = 1; i < m; i++){
                matrix[i][j] = 0;
            }
        }
    }

    // Zero first column if needed
    if(firstColZero){
        for(int i = 0; i < m; i++){
            matrix[i][0] = 0;
        }
    }

    // Zero first row if needed
    if(firstRowZero){
        for(int j = 0; j < n; j++){
            matrix[0][j] = 0;
        }
    }
}
