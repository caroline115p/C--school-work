#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "datatype.h"
#include "bstree.h"


Data bstree_search_node(BStree_node* current, Key key);
void inorder_traversal(BStree_node* current);
BStree_node *new_node(Key key, Data data);
void bstree_free_help(BStree_node *bt);

//Allocate memory of type BStree-node*,set the value to NULL, and return a pointer to the allocated memory.
BStree bstree_ini(void){
    BStree bst; 
	bst = (BStree)malloc(sizeof(BStree));
        *bst = NULL;
        return bst;
   
}

//Insert data with key into bst. If key is in bst, then do nothing.
//You may want to use a helper function for insertion to create a pointer to a tree node from key and data.}
void bstree_insert(BStree bst, Key key, Data data){
    if(*bst  == NULL){
        BStree_node * new = new_node(key, data);
	*bst = new;
    }else{
	int a = key_comp(key, (*bst) -> key);
        if (a > 0){
            bstree_insert(&((*bst)->right), key, data);
        }else if (a  < 0){
            bstree_insert(&((*bst)->left), key, data);
            
        }
    }
}

BStree_node *new_node(Key key, Data data){
    BStree_node * newnode = (BStree_node*) malloc(sizeof(BStree_node));
       newnode->key = key;
        newnode->data = data;
        newnode->left = NULL;
        newnode->right = NULL;
    return newnode;
}

//If key is in bst, return key’s associated data. If key is not in bst, return NULL.
Data bstree_search(BStree bst, Key key){
    return bstree_search_node(*bst, key);
}

Data bstree_search_node(BStree_node* current, Key key){
    if (current == NULL){
        return NULL;
    }else{
	int b = key_comp(key, current -> key);
        if (b < 0){
            return bstree_search_node(current->left, key);
        }else if (b > 0){
            return bstree_search_node(current->right, key);
        }else{
            return current->data;
        }
    }
}
//In order traversal of bst and print each node’s key and data.
void bstree_traversal(BStree bst){
        inorder_traversal(*bst);
}

void inorder_traversal(BStree_node* node){
    if(node != NULL){
        inorder_traversal(node->left);
        key_print(node->key);
        data_print(node->data);
	printf("\n");
        inorder_traversal(node->right);
    }
}
//Free all the dynamically allocated memory of bst.
void bstree_free(BStree bst){
	bstree_free(*bst);
	free(bst);
}

void bstree_free_help(BStree_node *bt){
	if (bt == NULL){
	return ;
	bstree_free_help(bt -> left);
	bstree_free_help(bt -> right);
	key_free(bt -> key);
	data_free(bt -> data);
	free(bt);
}
}

