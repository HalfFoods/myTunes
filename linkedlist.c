#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "linkedlist.h"
#include <time.h>
//Jeffrey
struct song_node * insert_front(struct song_node * s, char artist [100], char name [100]){
  struct song_node * front = malloc(sizeof(struct song_node));
  strcpy(front->artist, artist);
  strcpy(front->name, name);
  front->next = s;
  return front;
}

//Jeffrey
struct song_node * insert_order(struct song_node * s, char artist [100], char name [100]){
  struct song_node * cur = s;
  // Empty list
  if (!cur){
    return insert_front(cur, artist, name);
  }
  // Insert at front
  if (strcmp(artist, cur->artist) < 0){
    return insert_front(cur, artist, name);
  }
  // Find place in list
  while(cur->next){
    if (strcmp(artist, cur->next->artist) < 0){
      cur->next = insert_front(cur->next, artist, name);
      return s;
    }
    // Same artist
    if (strcmp(artist, cur->next->artist) == 0){
      if(strcmp(name, cur->next->name) < 0){
        cur->next = insert_front(cur->next, artist, name);
        return s;
      }
    }
    cur = cur->next;
  }
  // Insert at back
  struct song_node * back = malloc(sizeof(struct song_node));
  strcpy(back->artist, artist);
  strcpy(back->name, name);
  cur->next = back;
  return s;
}

//Jeffrey
void print_list(struct song_node * s){
  while (s){
    printf("%s: %s | ", s->artist, s-> name);
    s = s->next;
  }
  printf("\n");
}

//Jeffrey
struct song_node * find_node(struct song_node * s, char artist [100], char name [100]){
  struct song_node * cur = s;
  printf("looking for [%s: %s]\n", artist, name);
  while(cur){
    if (strcmp(cur->artist, artist) == 0 && strcmp(cur->name, name) == 0){
      printf("node found! %s: %s\n", artist, name);
      return cur;
    }
    cur = cur->next;
  }
  printf("node not found\n");
  return NULL;
}

//Vivian
struct song_node * get_artist(struct song_node * playlist, char * artist){
  struct song_node * current = playlist;
  printf("looking for %s\n", artist);
  //while next node exists and the current artist is not correct
  while (current->next && strcmp(current->artist, artist) != 0){
    current = current-> next;
  }
  //If the artists match
  if (strcmp(current->artist, artist) == 0){
    printf("node found! %s: %s\n", artist, current->name);
    return current;
  }
  //If artist is not in the list
  printf("node not found\n");
  return NULL;
}

//Vivian
struct song_node * get_random(struct song_node * playlist){
  struct song_node * current = playlist;
  while (1){ //keep running
    if (rand() % 1000 < 3){
      printf("Random song: [%s: %s]\n", current->artist, current->name);
      return current;
    }
    if (!(current->next)){ //if next doesnt exist
      current = playlist; //reset
    }
    else{
      current = current->next;
    }
  }
}

//Vivian
struct song_node * remove_node(struct song_node * playlist, char* artist, char* song){
  printf("Removing [%s: %s]\n", artist, song);
  struct song_node * previous = NULL;
  struct song_node * current = playlist;
  while (current->next && (strcmp(current->artist, artist) != 0 && strcmp(current->name, song) != 0)) {
    previous = current;
    current = current-> next;
  }
  if (strcmp(current->artist, artist) == 0 && strcmp(current->name, song) == 0){ //if node matches
    printf("Song removed successfully\n");
    if (!(previous)){  //if at the beginning of the list
      struct song_node * newFront = current->next;
      free(current);
      return newFront;
    }
    previous->next = current->next;
    free(current);
    return playlist;
  }
  printf("Song not in playlist\n");
  return playlist;
}

//Vivian
struct song_node * free_list(struct song_node * playlist){
  struct song_node * current = playlist;
  while (playlist) {
    current = current -> next;
    free(playlist);
    playlist = current;
  }
  return playlist;
}
