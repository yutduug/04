#include <stdio.h>

int main(int argc, char *argv[]) {
    int x, y;

    scanf("%i %i", &x, &y);

    printf("%i + %i = %i\n", x, y, x + y);
    printf("%i - %i = %i\n", x, y, x - y);
    printf("%i * %i = %i\n", x, y, x * y);
    printf("%i / %i = %i\n", x, y, x / y);
    printf("%i %% %i = %i\n", x, y, x % y);

    return 0;
}