#include <stdio.h>
int main() {
    /*
    int arr[2][3]={{1,2,3},{4,5,6}};
    int (*ptr)[3]=arr;
    for(int i=0; i<2; i++){
      for(int j=0;j<3;j++){
        printf("%d ", ptr[i][j]);
      }
      printf("\n");
    }
    */
    int arr[2][3] = { {1,2,3},{4,5,6} };

    for (int(*row)[3] = arr; row < arr + 2; row++) {
        for (int* col = *row; col < *row + 3; col++) {
            printf("%d ", *col);
        }
        printf("\n") :
    }
    return 0;
}
