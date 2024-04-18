#include <stdio.h>

int main(int argc, char **argv) {
    printf("Hi, ");
    printf("%s", argv[1]);
    printf(". How are you?\n");

    return 0;
}