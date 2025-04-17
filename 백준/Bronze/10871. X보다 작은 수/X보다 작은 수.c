#include <stdio.h>

int main(void)
{
    int N, X;

    scanf("%d", &N);
    scanf("%d", &X);

    getchar();

    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);

        if (num < X) {
            printf("%d ", num);
        }
    }


    return 0;
}