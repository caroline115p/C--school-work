#include "datatype.h"
#include <stdlib.h>
#include <stdio.h>
#include "bstree.h"
#include "matrix.h"

//Matrix construction using bstree ini();
Matrix matrix_construction(void){
    Matrix new = bstree_ini();
    return new;
}

//If location (index1, index2) is defined in Matrix m, then return 1. Otherwise, return 0.
unsigned char matrix_isin(Matrix m, Index index1, Index index2){
    Data locate = bstree_search(m, key_gen(index1, index2));
    if (locate != NULL){
        return 1;
    }
    else { 
        return 0;
    }
}
//If location (index1, index2) is defined in Matrix m, then return a pointer to the associated value. Otherwise, return NULL.
Value *matrix_get(Matrix m, Index index1, Index index2){
return bstree_search(m, key_gen(index1, index2));
}

//
//Assign value to Matrix m at location (index1, index2). If that location already has value, then overwrite.
void matrix_set(Matrix m, Index index1, Index index2, Value value){
    Key key = key_gen(index1, index2);
    Data search = bstree_search(m, key);
    if (search == NULL){
        bstree_insert(m, key, data_gen(value));
    }else{
        *search = value;
    }
}

//
//If location (index1, index2) is defined in Matrix m, then increase the associated value by value. Otherwise, report error.
void matrix_inc(Matrix m, Index index1, Index index2, Value value){
    Data search = bstree_search(m, key_gen(index1, index2));
    Key key = key_gen(index1, index2);
    if (search != NULL){
        (*search) = (*search) + value;
    }else{
        printf("ERROR");
    }
}

//
//Print indices and values in the Matrix m (with bstree traversal()).
void matrix_list(Matrix m){
    bstree_traversal(m);
}
//
//Free allocated space (with bstree free()).
void matrix_destruction(Matrix m){
    bstree_free(m);
}


