#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"
#include "library.h"
#include <time.h>

int main(){
  printf("Linked List tests:\n");
  printf("--------------------\n");
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
  L = remove_node(L, "abba", "dancing queen");
  L = remove_node(L, "katy perry", "wide awake");
  printf("--------------------\n");

  printf("Testing free_list:\n");
  L = free_list(L);
  printf("Freed list:\n");
  print_list(L);
  printf("--------------------\n\n\n");
  printf("Music Library tests:\n");
  printf("--------------------\n");
  printf("Testing add_song and print_library:\n");
  struct song_node * table[27];
  for (int i = 0; i<27; i++){
    *(table + i) = NULL;
  }
  print_library(table);
  add_song(table, "clean bandit", "rather be");
  add_song(table, "clean bandit", "symphony");
  add_song(table, "gym class heroes", "the fighter");
  add_song(table, "pearl jam", "alive");
  add_song(table, "pearl jam", "even flow");
  add_song(table, "pearl jam", "yellow ledbetter");
  add_song(table, "pink floyd", "time");
  add_song(table, "david guetta", "titanium");
  add_song(table, "billie eilish", "bad guy");
  add_song(table, "billie eilish", "idontwannabeyouanymore");
  add_song(table, "billie eilish", "lovely");
  print_library(table);
  printf("--------------------\n");
  printf("Testing find:\n");
  p = find(table, "pearl jam", "alive");
  p = find(table, "pearl jam", "time");
  printf("--------------------\n");
  printf("Testing find_artist:\n");
  p = find_artist(table, "pearl jam");
  printf("--------------------\n");
  printf("Testing print_letter:\n");
  print_letter(table, 'p');
  printf("--------------------\n");
  printf("Testing print_artist:\n");
  print_artist(table, "pearl jam");
  printf("--------------------\n");
  printf("Testing shuffle:\n");
  shuffle(table);
  printf("--------------------\n");
  printf("Testing remove_song:\n");
  p = remove_song(table, "david guetta", "titanium");
  printf("--------------------\n");
  printf("Testing clear_library:\n");
  clear_library(table);
  printf("Freed list:\n");
  print_library(table);
  return 0;
}
