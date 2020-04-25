#include <stdio.h>
#include <stdlib.h>
#include "list.h"

Node *create_node(int value)
{
  Node *new_node = malloc(sizeof(Node));
  new_node->value = value;
  new_node->next = NULL;
  return new_node;
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

int search_node(List *list, int value)
{
  Node *p_walk = list->first;
  int count = 0;

  while (p_walk != NULL)
  {
    if (p_walk->value == value)
    {
      break;
    }
    p_walk = p_walk->next;
    count++;
  }
  return p_walk == NULL ? -1 : count;
}

List *create_list()
{
  List *new_list = malloc(sizeof(List));
  new_list->first = NULL;
  new_list->last = NULL;
  return new_list;
}