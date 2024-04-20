#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(int argc, char **argv) {
    char *endptr;

    int n = strtol(argv[1], &endptr, 10); // number of card types
    bool isCollected[n];                            // isCollected[i] = true if card i has been collected
    int count = 0;                                  // total number of cards collected
    int distinct = 0;                               // number of distinct cards

    srand((unsigned int) time(NULL));

    // repeatedly choose a random card and check whether it's a new one
    while (distinct < n) {
        int value = rand() % n;                              // random card between 0 and n-1
        count++;                                             // we collected one more card
        if (!isCollected[value]) {
            distinct++;
            isCollected[value] = true;
        }
    }

    // print the total number of cards collected
    printf("%d\n", count);

    return 0;
}