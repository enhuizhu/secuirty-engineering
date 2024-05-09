#include <stdio.h>
// Format string attack
int main(int argc, char **argv) {
    printf("--- print the argument ---\n");
    printf(argv[1]);
}
