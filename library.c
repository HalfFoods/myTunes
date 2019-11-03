#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "linkedlist.h"
#include "library.h"
#include <time.h>

void add_song(struct song_node * table[27], char artist[100], char name[100]){
  struct song_node * cur = table[artist[0] - 'a'];
  cur = insert_order(cur, artist, name);
}

void print_library(struct song_node * table[27]){
  for (int i =0; i<27; i++){
    printf("%c list\n\t", 'a' + i);
    print_list(table[i]);
  }
}
