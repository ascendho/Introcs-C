#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(int argc, char **argv) {
    char *endptr;

    int n = strtol(argv[1], &endptr, 10);       // lattice size
    int trials = strtol(argv[2], &endptr, 10);  // number of trials
    int deadEnds = 0;                                     // trails resulting in a dead end

    srand((unsigned int) time(NULL));

    // simulate trials self-avoiding walks
    for (int t = 0; t < trials; t++) {
        bool a[n][n];               // intersections visited

        // initialize the value of array a to false
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                a[i][j] = false;

        int x = n / 2, y = n / 2;   // current position

        // repeatedly take a random step, unless you've already escaped
        while (x > 0 && x < n - 1 && y > 0 && y < n - 1) {

            // dead-end, so break out of loop
            if (a[x - 1][y] && a[x + 1][y] && a[x][y - 1] && a[x][y + 1]) {
                deadEnds++;
                break;
            }

            // mark (x,y) as visited
            a[x][y] = true;

            // take a random step for unvisited neighbor
            double r = (double) rand() / RAND_MAX;

            if (r < 0.25) {
                if (!a[x + 1][y])
                    x++;
            } else if (r < 0.50) {
                if (!a[x - 1][y])
                    x--;
            } else if (r < 0.75) {
                if (!a[x][y + 1])
                    y++;
            } else if (r < 1.00) {
                if (!a[x][y - 1])
                    y--;
            }
        }
    }

    printf("%d%% dead ends\n", 100 * deadEnds / trials);

    return 0;
}