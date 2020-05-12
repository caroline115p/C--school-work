#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "data.h"

Key *key_construct(char *in_name, int in_id) {
//dynamically allocate memory to hold a key
    Key *tmp = (Key *) malloc(sizeof(key_construct));
//set Key's id to be in_id
    (*tmp).id=in_id;
//dynamically allocate memory for the key's name so that name will contain what is in 'in_name'
	(*tmp).name= strdup(in_name);
    return tmp;
}

int key_comp(Key key1, Key key2){
//if key1 and key 2 don't have a same name then compare two key using strcmp().
    if (key1.name != key2.name){
	return strcmp(key1.name, key2.name);
    }
//if key1.name = key2.name then compare key1.id with key2.id
	else { 
		if (key1.id>key2.id){
		return key1.id;
		}
		else if(key1.id < key2.id){
		return key2.id;}
	else {
	return 0;
}
}
}

//effect : (key ->name, key->id) is printed.
void print_key(Key *key) {
    printf("%s\n,%d\n",key->name,key->id);
}
//effect : node.key is printed and then the node.data is printed. 
void print_node(Node node) {
    printf("%s\n, %c\n",node.key->name,node.data);
}

