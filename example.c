#include <stdio.h>

int main(int argc, char *argv[]) {
    int seconds;
    int minutes;
    int remain;

    scanf("%i", &seconds);

    minutes = seconds / 60;
    remain = seconds % 60;

    printf("%i:%i\n", minutes, remain);

    return 0;
}