#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

int main(){
  printf("Linked List tests:\n");
  printf("--------------------\n");
  printf("Testing print_list:\n");
  struct song_node * L = NULL;
  L = insert_front(L, "pearl jam", "even flow");
  L = insert_front(L, "pearl jam", "alive");
  L = insert_front(L, "ac/dc", "thunderstruck");
  print_list(L);
  printf("Added\n");
  L = insert_order(L, "parl jam", "yellow ledbetter");
  print_list(L);

  printf("--------------------\n");
  printf("Testing get_artist:\n");
  printf("--------------------\n");
  printf("Testing get_random:\n");
  printf("--------------------\n");
  printf("Testing remove_node:\n");
  printf("--------------------\n");
  printf("Testing free_list:\n");
  return 0;
}
