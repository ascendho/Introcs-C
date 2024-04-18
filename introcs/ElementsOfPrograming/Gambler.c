#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv) {
    char *endptr;

    int stake = strtol(argv[1], &endptr, 10);  // gambler's stating bankroll
    int goal = strtol(argv[2], &endptr, 10);   // gambler's desired bankroll
    int trials = strtol(argv[3], &endptr, 10); // number of trials to perform

    int bets = 0;  // total number of bets made
    int wins = 0;  // total number of games won

    srand(time(NULL));

    // repeat trials times
    for (int t = 0; t < trials; t++) {

        // do one gambler's ruin simulation
        int cash = stake;
        while (cash > 0 && cash < goal) {
            bets++;
            if ((double) rand() / RAND_MAX < 0.5) cash++;  // win $1
            else cash--;                                   // lose $1
        }
        if (cash == goal) wins++;                          // did gambler go achieve desired goal?
    }

    // print results
    printf("%d wins of %d\n", wins, trials);
    printf("Percent of games won = %.1lf\n", 100.0 * wins / trials);
    printf("Avg # bets           = %.2lf\n", 1.0 * bets / trials);

    return 0;
}