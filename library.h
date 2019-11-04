void add_song(struct song_node * table[27], char artist[100], char name[100]);
struct song_node * find(struct song_node * table[27], char artist[100], char name[100]);
struct song_node * find_artist(struct song_node * table[27], char artist[100]);
void print_letter(struct song_node * table[27], char c);
void print_library(struct song_node * table[27]);
void print_artist(struct song_node * table[27], char artist[100]);
void shuffle();
struct song_node * remove_song();
struct song_node ** clear_library();
