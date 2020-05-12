#include "bstree.h"
#include "datatype.h"
#include "matrix.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

int main() {
    Matrix matrix  = matrix_construction();
    char *matrix1, *matrix2;
    matrix1 = (char*) malloc(100*sizeof(char));
    matrix2 = (char*) malloc(100*sizeof(char));
   while (scanf("%s %s", matrix1, matrix2) != EOF){
        getchar();
        if (matrix_isin(matrix, matrix1, matrix2) == 1){
            matrix_inc(matrix, matrix1, matrix2, 1);
        }else{
            matrix_set(matrix, matrix1, matrix2, 1);
        } 
}
 printf("String1    String2    Occurrence\n");
    matrix_list(matrix);
 
}
