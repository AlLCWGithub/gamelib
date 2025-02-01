#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Player structure
typedef struct {
    char name[50];
    int health;
    int gold;
    int attackPower;
} Player;

// Monster structure
typedef struct {
    char name[50];
    int health;
    int attackPower;
} Monster;

// Function prototypes
void battle(Player *player, Monster monster);
Monster generateMonster();
void explore(Player *player);
void showStats(Player *player);

int main() {
    Player player;
    int choice;

    // Initialize random number generator
    srand(time(0));

    printf("Enter your name, adventurer: ");
    fgets(player.name, 50, stdin);
    player.name[strcspn(player.name, "\n")] = '\0'; // Remove newline character
    player.health = 100;
    player.gold = 0;
    player.attackPower = 10;

    printf("Welcome, %s! Your adventure begins now...\n", player.name);

    while (player.health > 0) {
        printf("\n1. Explore\n2. View Stats\n3. Rest (Quit Game)\n");
        printf("Choose an action: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                explore(&player);
                break;
            case 2:
                showStats(&player);
                break;
            case 3:
                printf("You rest and decide to end your journey.\n");
                player.health = 0; // End the game
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    printf("Game Over. Thank you for playing, %s!\n", player.name);
    return 0;
}

// Function to handle battle
void battle(Player *player, Monster monster) {
    printf("\nA wild %s appears!\n", monster.name);
    while (player->health > 0 && monster.health > 0) {
        printf("\nYour health: %d, %s's health: %d\n", player->health, monster.name, monster.health);
        printf("1. Attack\n2. Run\n");
        printf("Choose an action: ");
        int choice;
        scanf("%d", &choice);

        if (choice == 1) {
            printf("You attack the %s for %d damage!\n", monster.name, player->attackPower);
            monster.health -= player->attackPower;

            if (monster.health > 0) {
                printf("The %s attacks you for %d damage!\n", monster.name, monster.attackPower);
                player->health -= monster.attackPower;
            } else {
                printf("You defeated the %s!\n", monster.name);
                int loot = rand() % 20 + 10; // Random gold between 10-30
                printf("You found %d gold!\n", loot);
                player->gold += loot;
            }
        } else if (choice == 2) {
            printf("You ran away safely.\n");
            return;
        } else {
            printf("Invalid action. The %s attacks you!\n", monster.name);
            player->health -= monster.attackPower;
        }
    }

    if (player->health <= 0) {
        printf("You were defeated by the %s...\n", monster.name);
    }
}

// Function to generate a random monster
Monster generateMonster() {
    Monster monsters[] = {
        {"Goblin", 30, 5},
        {"Orc", 50, 10},
        {"Troll", 70, 15}
    };
    return monsters[rand() % 3]; // Return a random monster
}

// Function to explore
void explore(Player *player) {
    printf("\nYou venture into the unknown...\n");
    if (rand() % 2 == 0) {
        Monster monster = generateMonster();
        battle(player, monster);
    } else {
        int gold = rand() % 50 + 10; // Random gold between 10-60
        printf("You find a treasure chest with %d gold!\n", gold);
        player->gold += gold;
    }
}

// Function to show player stats
void showStats(Player *player) {
    printf("\n-- Player Stats --\n");
    printf("Name: %s\n", player->name);
    printf("Health: %d\n", player->health);
    printf("Gold: %d\n", player->gold);
    printf("Attack Power: %d\n", player->attackPower);
    printf("-------------------\n");
}
