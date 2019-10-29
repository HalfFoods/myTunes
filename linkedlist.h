struct song_node{
  char name[100];
  char artist[100];
  struct song_node *next;
};
struct song_node * table[27];

void print_list();
struct song_node * insert_front();
struct song_node * insert_order();
struct song_node * get_node();
struct song_node * get_artist()
struct song_node * get_random();
struct song_node * remove_node();
struct song_node * free_list();
