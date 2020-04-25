#include <stdio.h>
#include "list.h"

int main()
{
  List *list = create_list();
  int number;
  printf("Please enter a number\n");
  scanf("%d", &number);
  while (number != -99)
  {
    insert_node(list, number);
    printf("Please enter a number\n");
    scanf("%d", &number);
  }

  display_list(list);
  return 0;
}