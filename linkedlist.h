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
<<<<<<< HEAD
//Part 2
struct song_node * add_song();
struct song_node * search_song();
struct song_node * search_artist();
void print_letter();
void print_artist();
void shuffle();
struct song_node * delete_song();
struct song_node * clear_lib();
=======
*/
>>>>>>> 90b967e49b94215599a900e67784bcb26d388daa
