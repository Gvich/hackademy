/*
 * =====================================================================================
 *
 *       Filename:  linked_list.c
 *
 *    Description: ex07 
 *
 *        Version:  1.0
 *        Created:  11/11/21 19:09:11
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eugene Karashevich (https://github.com/Gvich), wert130202@gmail.com
 *        Company:  ---
 *
 * =====================================================================================
 */

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linked_list.h"
#include <assert.h>





 node_t  *list_create(void *data){
  node_t * head;
  head = (node_t *) malloc(sizeof(node_t));
  head->data = data;
  head->next = NULL;
  return head;
 };

void    list_destroy(node_t **head, void (*fp)(void *data)){
  struct node *current = (struct node*) malloc(sizeof(struct node));
   //struct node* current = *head;
   struct node* next;
   current=*head;
 
   while (current != NULL){
       next = current->next;
       fp(current->data);
       free(current);
       //fp(current);
       current = next;
   }
   //*head = NULL;
  
}

void    list_push(node_t *head, void *data){
    node_t* new_node = (node_t*) malloc(sizeof(node_t));
    new_node->data  = data;
    new_node->next = (head);
    (head) = new_node;
}

void    list_unshift(node_t **head, void *data){

    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    struct node *last = *head;  
    new_node->data  = data;
    new_node->next = NULL;
    if (*head == NULL){
       *head = new_node;
    } else{
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
     }
}



void    *list_remove(node_t **head,  int pos){
    int i = 0;
    node_t * current = *head;
    //node_t * temp_node = NULL;
    node_t* temp_node = (node_t*) malloc(sizeof(node_t));
    for (i = 0; i < pos-1; i++) {
        current = current->next;
    }
    temp_node = current->next;
    current->next = temp_node->next;
    //free(temp_node);

    return temp_node;

 }

void    *list_pop(node_t **head){
    struct node  *preNode;
    //node_t* toDeLast = (node_t*) malloc(sizeof(node_t));
    
    if(*head == NULL){}
    else
    {
        struct node *toDelLast = (struct node*) malloc(sizeof(struct node));
        toDelLast = *head;
        preNode = *head;
        while(toDelLast->next != NULL)
        {
            preNode = toDelLast;
            toDelLast = toDelLast->next;
        }
        if(toDelLast == *head)
        {
            return NULL;
        }
        else
        {
            preNode->next = NULL;
        }
        //free(toDelLast);
        return toDelLast;
    }

   return NULL;
}

void    *list_shift(node_t **head){
  struct node* t = *head;
  /**head = temp->next; 
  free(temp);  */ 
  if( t == NULL)
    {
        return NULL;
    }else{
      node_t* del = (node_t*) malloc(sizeof(node_t));
      node_t *temp = *head;
  //struct node *temp_del = *head;
      temp = temp->next;
      del=*head;
    //free(del);
      *head = temp;
      return del;
    }
   //return del;    

}

void    list_print(node_t *head){
  struct node *temp = head;
  while(temp != NULL){
        if(temp->next == NULL){
            printf("%p", temp->data);

            //puts(temp->data);
        }
        temp = temp->next;
    }
}

void list_visitor(node_t *head, void (*fp)(void *data)){
node_t *temp = head;
node_t *out=temp;
//int f=0;
while(temp != NULL){
  if(temp->next == NULL){
            out=temp->data;
            fp(out->data);
        }
        temp = temp->next;
}
}
