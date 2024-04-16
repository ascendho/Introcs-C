#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char **argv) {
    char *endptr;
    int year = strtol(argv[1], &endptr, 10);

    bool isLeapYear;

    // divisible by 4
    isLeapYear = (year % 4 == 0);

    // divisible by 4 and not 100
    isLeapYear = isLeapYear && (year % 100 != 0);

    // divisible by 4 and not 100 unless divisible by 400
    isLeapYear = isLeapYear || (year % 400 == 0);

    printf("%d", isLeapYear);

    return 0;
}