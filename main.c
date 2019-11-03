#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"
#include <time.h>

int main(){
  printf("Linked List tests:\n\n");
  printf("Testing insert_front and print_list:\n");
  srand(time(NULL));
  struct song_node * L = NULL;
  L = insert_front(L, "pearl jam", "sirens");
  L = insert_front(L, "pearl jam", "even flow");
  L = insert_front(L, "ac/dc", "thunderstruck");
  print_list(L);
  printf("--------------------\n");

  printf("Testing insert_order:\n");
  printf("Added [macklemore: glorious]\n");
  L = insert_order(L, "macklemore", "glorious");
  printf("Added [blackbear: hot girl bummer]\n");
  L = insert_order(L, "blackbear", "hot girl bummer");
  print_list(L);
  printf("Added [abba: dancing queen]\n");
  L = insert_order(L, "abba", "dancing queen");
  print_list(L);
  printf("Added [pearl jam: alive]\n");
  L = insert_order(L, "pearl jam", "alive");
  print_list(L);
  printf("Added [pearl jam: last kiss]\n");
  L = insert_order(L, "pearl jam", "last kiss");
  print_list(L);
  printf("Added [pearl jam: yellow ledbetter]\n");
  L = insert_order(L, "pearl jam", "yellow ledbetter");
  print_list(L);
  printf("--------------------\n");
  printf("Testing insert_order with special cases\n");
  struct song_node * L1 = NULL;
  printf("Added [clean bandit: symphony]\n");
  L1 = insert_order(L1, "clean bandit", "symphony");
  print_list(L1);
  printf("Added [taylor swift: blank space]\n");
  L1 = insert_order(L1, "taylor swift", "blank space");
  print_list(L1);
  printf("--------------------\n");

  printf("Testing find_node:\n");
  struct song_node * p = NULL;
  p = find_node(L, "pearl jam", "even flow");
  p = find_node(L, "pearl jam", "daughter");
  printf("--------------------\n");

  printf("Testing get_artist:\n");
  get_artist(L, "pearl jam");
  get_artist(L, "katy perry");
  printf("--------------------\n");

  printf("Testing get_random:\n");
  get_random(L);
  get_random(L);
  printf("--------------------\n");

  printf("Testing remove_node:\n");
  remove_node(L, "abba", "dancing queen");
  remove_node(L, "katy perry", "wide awake");
  printf("--------------------\n");

  printf("Testing free_list:\n");
  free_list(L);
  printf("Freed list:\n");
  print_list(L);
  return 0;
}
