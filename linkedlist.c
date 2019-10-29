#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "linkedlist.h"

struct song_node * insert_front(){

}
struct song_node * insert_order(){

}
void print_list(){

}
struct song_node * get_node(){

}

//Vivian
struct song_node * get_artist(struct song_node * playlist, char * artist){
  struct song_node * current = playlist;
  //while next node exists and the current artist is not correct
  while (current->next && strcmp(current->artist, artist) != 0){
    current = current-> next;
  }
  //If the artists match
  if (strcmp(current->artist, artist) == 0){
    return current;
  }
  //If artist is not in the list
  return NULL;
}

struct song_node * get_random(struct song_node * playlist){

}
struct song_node * remove_node(struct song_node * playlist, char * artist, char * song){

}
struct song_node * free_list(struct song_node * playlist){

}
