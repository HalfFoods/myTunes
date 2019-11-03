struct song_node * table[27];

struct song_node * add_song(struct song_node * table[27], char artist[100], char name[100]);
void print_library(struct song_node * table[27]);
struct song_node * find_song();
struct song_node * find_artist();
void print_letter();
void print_artist();
void shuffle();
struct song_node * remove_song();
struct song_node * clear_library();
