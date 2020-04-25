#ifndef __LIST_H_
#define __LIST_H_

typedef struct node
{
  int value;
  struct node *next;
} Node;

typedef struct list
{
  Node *first;
  Node *last;
  int count;
} List;

List *create_list();
void insert_node(List *list, int value);
Node *create_node(int value);
void display_list(List *list);

#endif
