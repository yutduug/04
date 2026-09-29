#include <stdio.h>

int main(int argc, char *argv[]) {
    int seconds;
    int hour;
    int minute;
    int second;

    scanf("%i", &seconds);

    hour = seconds / 3600;
    minute = (seconds % 3600) / 60;
    second = seconds % 60;

    printf("The time for %i seconds is %i : %i : %i\n",
           seconds, hour, minute, second);

    return 0;
}