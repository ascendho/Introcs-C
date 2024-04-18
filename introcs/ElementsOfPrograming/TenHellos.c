#include <stdio.h>

int main() {

    // print out special cases whose ordinal doesn't end in th
    printf("1st Hello\n");
    printf("2nd Hello\n");
    printf("3rd Hello\n");

    // count from i = 4 to 10
    int i = 4;
    while (i <= 10) {
        printf("%dth Hello\n", i);
        i = i + 1;
    }

    return 0;
}