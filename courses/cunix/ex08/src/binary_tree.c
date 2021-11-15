/*
 * =====================================================================================
 *
 *       Filename:  binary_tree.c
 *
 *    Description: ex08 
 *
 *        Version:  1.0
 *        Created:  11/11/21 15:59:53
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eugene Karashevich (https://github.com/Gvich), wert130202@gmail.com
 *        Company:  ---
 *
 * =====================================================================================
 */
#define _GNU_SOURCE

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

#include "binary_tree.h"

node_t  *allocnode(){
    // Allocate memory for new node
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = NULL;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
node_t  *insert(node_t *root, char *key, void *data){

}
void    print_node(node_t *node);
void    visit_tree(node_t *node, void (*fp)(node_t *root));
void    destroy_tree(node_t *node, void (*fdestroy)(node_t *root));
