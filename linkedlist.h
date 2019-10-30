struct song_node{
  char artist[100];
  char name[100];
  struct song_node *next;
};
struct song_node * table[27];

struct song_node * insert_front(struct song_node * s, char artist [100], char name [100]);
void print_list(struct song_node * s);


struct song_node * insert_order(struct song_node * s, char artist [100], char name [100]);
/*
struct song_node * get_node();
struct song_node * get_artist();
struct song_node * get_random();
struct song_node * remove_node();
struct song_node * free_list();
*/
