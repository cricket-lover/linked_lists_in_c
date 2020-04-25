#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void display_list(List *list)
{
  Node *p_walk = list->first;
  while (p_walk != NULL)
  {
    printf("value is %d\n", p_walk->value);
    p_walk = p_walk->next;
  }
  printf("total number of nodes are %d\n", list->count);
}

Node *create_node(int value)
{
  Node *new_node = malloc(sizeof(Node));
  new_node->value = value;
  new_node->next = NULL;
  return new_node;
}

List *create_list()
{
  List *new_list = malloc(sizeof(List));
  new_list->first = NULL;
  new_list->last = NULL;
  return new_list;
}

void insert_node(List *list, int value)
{
  Node *new_node = create_node(value);
  if (list->first == NULL)
  {
    list->first = new_node;
  }
  else
  {
    list->last->next = new_node;
  }
  list->count++;
  list->last = new_node;
}
