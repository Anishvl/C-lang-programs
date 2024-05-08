#include <stdio.h>

int main() {
  // Declare the two matrices and their sizes
  int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int matrix2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
  int rows1 = 3;
  int cols1 = 3;
  int rows2 = 3;
  int cols2 = 3;

  // Declare the result matrix and initialize it to 0
  int result[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

  // Perform the matrix multiplication
  for (int i = 0; i < rows1; i++) {
    for (int j = 0; j < cols2; j++) {
      for (int k = 0; k < cols1; k++) {
        result[i][j] += matrix1[i][k] * matrix2[k][j];
      }
    }
  }

  // Print the result matrix
  for (int i = 0; i < rows1; i++) {
    for (int j = 0; j < cols2; j++) {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }

  return 0;
}