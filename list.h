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
} List;

#define END_OF_INPUT -99
#define POSITION_NOT_FOUND -1

List *create_list();
void insert_node(List *list, int value);
Node *create_node(int value, Node *);
int search_node(List *list, int value);
void add_to_start(List *list, int value);

#endif
