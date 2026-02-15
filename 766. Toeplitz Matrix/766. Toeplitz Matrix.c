/*
 * Problem: 766. Toeplitz Matrix
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/toeplitz-matrix/
 * Language: c
 * Date: 2026-02-15
 */

bool isToeplitzMatrix(int** matrix, int matrixSize, int* matrixColSize) {
    for(int i=1;i<matrixSize;i++){
        for(int j=1;j<*matrixColSize;j++){
            if(matrix[i][j]!=matrix[i-1][j-1]){
                return false;
            }
        }
    }
    return true;
}
