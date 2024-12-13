#include <stdio.h>
#include <string.h>

typedef char player_name[50];
typedef int  player_age;
typedef int  player_score;

typedef struct Player {
    player_name  name;
    player_age   age;
    player_score score;
} player;

void log__player(player *player);

int main() {
      printf("Lets code some amazing things 🚀!!!\n\n");
    // Your code here

    struct Player player1;
    strcpy(player1.name, "John");
    player1.age   = 25;
    player1.score = 100;
    log__player(&player1);
      printf("\n");

    player player2 = {"Jane", 30, 200};
    log__player(&player2);

    return 0;
}

void log__player(player *player) {
      printf("Player name: %s\n", player->name);
      printf("Player age: %d\n", player->age);
      printf("Player score: %d\n", player->score);
}