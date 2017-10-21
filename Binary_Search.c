#include<stdio.h>
#include<stdlib.h>

#define MAXNAMELENTH 64
#define MAXDATALENTH 1465

typedef struct node {
        char name[MAXNAMELENTH];
        char data[MAXDATALENTH];
        struct node *left;
        struct node *right;
} node;

insert(node *tree, char *name, char *data);
search(node *tree,char *key, FILE outputfile);

int main(int argc, char *argv[]){
    node *tree;
    int i;
    int count = 0;
    char *search_key = NULL;
    
    FILE datafile;
    FILE outputfile;
    
    datafile = fopen(argv[1],"r");
    
    while(fget(line,MAXNAMELENTH + MAXDATALENTH, datatfile) != NULL){
             insert(&tree, name, data);
    }
    
    outputfile = fopen(argv[2], "a");
    
    insert(tree, datatfile);
    
    for(i=3; argv[i] != NULL){
             argv[3] = search_key;
             search(&tree, search_key, count, outputfile);
    }
}

insert(node *tree, char *name, char *data){

    tree = (node *) malloc(sizeof(node));
    
    if(tree = NULL){
            strcopy(tree->name, name);
            strcopy(tree->data, data);
    }else if(strcmp(tree->name,name) < 0){
          tree->left = insert(tree->left, name, data);
    }else if(strcmp(tree->name,name) > 0){
          tree->right = insert(tree->right, name, data);
    }else{
          if(strcmp(tree->data,data) < 0){
                                     tree->left = insert(tree->left, name, data);
          }else if(strcmp(tree->data,data) > 0){
                tree->right = insert(tree->left, name, data);
          }
    }       
    return tree;
}

search(node *tree, char *search_key, int count, FILE outputfile){
            
            if (strcmp(key, (*tree)->name) < 0) {
               search(&((*tree)->left), key, count, fp_out);
               count++;
            }else if(strcmp(key, (*tree)->name) > 0){
                  search(&((*tree)->right), key, count, fp_out);
                  count++;
            }else if(strcmp(key, (*tree)->name) == 0){
                  fprintf(fp_out, "%s %s\n", key, (*tree)->data);
            } else {
                  fprintf(fp_out, "%s --> NOTFOUND", key);
            }
}

