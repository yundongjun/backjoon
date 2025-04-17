#include <stdio.h>

int main(void)
{
    int A, B, Y;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &Y);

    int day = (Y - A) / (A - B);

    if ((Y - A) % (A - B) == 0) day += 1;
    else day += 2;

    printf("%d", day);

    return 0;
}