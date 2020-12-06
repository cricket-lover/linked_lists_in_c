#include <stdio.h>
#include <stdlib.h>
#include "list.h"

Node *create_node(int value, Node *next_reference)
{
  Node *new_node = malloc(sizeof(Node));
  new_node->value = value;
  new_node->next = next_reference;
  return new_node;
}

void add_to_start(List *list, int value)
{
  Node *new_node = create_node(value, list->first);
  list->first = new_node;
}

void insert_node(List *list, int value)
{
  Node *new_node = create_node(value, NULL);
  if (list->first == NULL)
  {
    list->first = new_node;
  }
  else
  {
    list->last->next = new_node;
  }
  list->last = new_node;
}

int search_node(List *list, int value)
{
  Node *p_walk = list->first;
  int position = 0;

  while (p_walk != NULL && p_walk->value != value)
  {
    p_walk = p_walk->next;
    position++;
  }
  return p_walk == NULL ? POSITION_NOT_FOUND : position;
}

List *create_list()
{
  List *new_list = malloc(sizeof(List));
  new_list->first = NULL;
  new_list->last = NULL;
  return new_list;
}