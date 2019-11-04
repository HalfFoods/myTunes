#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "linkedlist.h"
#include "library.h"
#include <time.h>

//Jeffrey
void add_song(struct song_node * table[27], char artist[100], char name[100]){
  *(table + (artist[0] - 'a')) = insert_order(*(table + (artist[0] - 'a')), artist, name);
}
//Jeffrey
struct song_node * find(struct song_node * table[27], char artist[100], char name[100]){
  struct song_node * cur = *(table + (artist[0] - 'a'));
  return find_node(cur, artist, name);
}
//Jeffrey
struct song_node * find_artist(struct song_node * table[27], char artist[100]){
  struct song_node * cur = *(table + (artist[0] - 'a'));
  return get_artist(cur, artist);
}
//Jeffrey
void print_letter(struct song_node * table[27], char c){
  printf("%c list\n\t", c);
  print_list(table[c - 'a']);
}
//Jeffrey
void print_artist(struct song_node * table[27], char artist[100]){
  struct song_node * cur = find_artist(table, artist);
  while (cur && strcmp(artist, cur->artist) == 0){
    printf("%s: %s | ", cur->artist, cur->name);
    cur = cur->next;
  }
  printf("\n");
}
//Jeffrey
void print_library(struct song_node * table[27]){
  for (int i =0; i<27; i++){
    if (table[i]){
      if (i==26){
        printf("others list\n\t");
      }
      else{
        printf("%c list\n\t", 'a' + i);
      }
      print_list(table[i]);
    }
  }
}
//Vivian
void shuffle(struct song_node * playlist[27]){
  for (int x = 0; x < 4; x ++){
    int letter = rand()%26;
    if (playlist[letter]) {
      get_random(playlist[letter]);
    }
    else{
      x--;
    }
  }
}
//Vivian
struct song_node * remove_song(struct song_node * playlist[27], char * artist, char * song){
  int letter = artist[0] - 'a';
  playlist[letter] = remove_node(playlist[letter], artist, song);
  return playlist[letter];
}
//Vivian
struct song_node ** clear_library(struct song_node * playlist[27]){
  for (int i = 0 ; i < 27; i ++){
    if (playlist[i]){
      playlist[i] = free_list(playlist[i]);
    }
  }
  return playlist;
}
