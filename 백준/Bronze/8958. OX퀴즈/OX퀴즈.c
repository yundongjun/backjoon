#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    getchar();

    int result_sum = 0;
    

    for (int i = 0; i < N; i++) {
        int sum = 1;

        while (1) {
            char ch;

            scanf("%c", &ch);

            if (ch == 'O') {
                result_sum += sum;
                sum++;
            }
            else {
                sum = 1;
            }

            if (ch == 10) {
                break;
            }
        }

        printf("%d\n", result_sum);
        result_sum = 0;
    }

    return 0;
}