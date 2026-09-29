#include <stdio.h>

int main(int argc, char *argv[]) {
    int year;

    scanf("%i", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%i is a leap year\n", year);
    } else {
        printf("%i is not a leap year\n", year);
    }

    return 0;
}