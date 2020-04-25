#include <stdio.h>
#include "list.h"

void display_position(int value, int position)
{
  if (position == -1)
  {
    printf("%d is not present in the list\n\n", value);
  }
  else
  {
    printf("%d is present in the list at position %d\n\n", value, position);
  }
}

int main()
{
  List *list = create_list();
  int value_to_insert, value_to_search, position;
  printf("Please enter a number\n");
  scanf("%d", &value_to_insert);
  while (value_to_insert != -99)
  {
    insert_node(list, value_to_insert);
    printf("Please enter a number\n");
    scanf("%d", &value_to_insert);
  }
  printf("\n");

  printf("Please enter a number\n");
  scanf("%d", &value_to_search);
  while (value_to_search != -99)
  {
    position = search_node(list, value_to_search);
    display_position(value_to_search, position);
    printf("What number would you like to search for?\n");
    scanf("%d", &value_to_search);
  }

  return 0;
}