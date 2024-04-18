#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv) {
    char *endptr;

    int m = strtol(argv[1], &endptr, 10);   // choose this many elements
    int n = strtol(argv[2], &endptr, 10);   // from 0, 1, ..., n-1

    // create permutation 0, 1, ..., n-1
    int perm[n];
    for (int i = 0; i < n; i++)
        perm[i] = i;

    srand(time(NULL));

    // create random sample in perm[0], perm[1], ..., perm[m-1]
    for (int i = 0; i < m; i++) {

        // random integer between i and n-1
        int r = i + (rand() % (n - i));

        // swap elements at indices i and r
        int t = perm[r];
        perm[r] = perm[i];
        perm[i] = t;
    }

    // print results
    for (int i = 0; i < m; i++)
        printf("%d ", perm[i]);
    printf("\n");

    return 0;
}