#include <stdio.h>

#define SIZE 50

int main() {
    char ruler1[SIZE] = " 1 ";
    char ruler2[SIZE], ruler3[SIZE], ruler4[SIZE], ruler5[SIZE];

    snprintf(ruler2, SIZE, "%s%s%s", ruler1, "2", ruler1);
    snprintf(ruler3, SIZE, "%s%s%s", ruler2, "3", ruler2);
    snprintf(ruler4, SIZE, "%s%s%s", ruler3, "4", ruler3);
    snprintf(ruler5, SIZE, "%s%s%s", ruler4, "5", ruler4);

    puts(ruler1);
    puts(ruler2);
    puts(ruler3);
    puts(ruler4);
    puts(ruler5);

    return 0;
}