#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

BStree bstree_ini(int size) {
    int i;
//dynamically allocate memory of type BStree_struct type
    BStree binarytree = (BStree) malloc(sizeof(BStree_struct));
//allocate memory for a Node array of size+1 for member tree_nodes
   (*binarytree).tree_nodes = (Node *) malloc((size+1)*sizeof(int));
//allocate memory for an unsigned char array of size + 1 for member is_free
    (*binarytree).is_free = (unsigned char *) malloc((size+1)*sizeof(char));
//set all entries of is_free to 1

for (i = 1; i < (*binarytree).size+1; i ++){
        (*binarytree).is_free[i] = '1';
    }
//set member size to 'size'
    (*binarytree).size = size;
    return binarytree;

}
//'data' with 'key' is inserted into 'bst' and if'key' is already in 'bst' do nothing.
void bstree_insert(BStree bst, Key *key, int data) {
    int i;
//using for loop to keep indexing it.
    for (i = 1; i <(*bst).size; i ++){
// we should check the array bound and if the i is larger than binary search tree's size then it should print out the message.
    if(i > bst->size) {
        printf("Array is out of bound");
}
//else then use comparing key and we can insert into binary search tree depends on the left node or right node
    else{
        if(key_comp(*bst.(key[i]), *bst.(key[i+1]) > 0){
            bstree_insert(bst,*bst.(key[i+1]),data);
        }
        else{
            bstree_insert(bst,*bst.(key[i]),data);
        }
    }
    }
}
//print all the nodes in bst using in order traversal
void bstree_traversal(BStree bst) {
	if (bst != NULL){
		bstree_traversal(bst);
		printf("%c\n",(*bst).tree_nodes);
}
}

//all memory used by bst are freed
//use free function in c 
void bstree_free(BStree bst) {
if (bst != NULL){
   free(bst);
}
}
