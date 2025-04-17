#include <stdio.h>

int main(void)
{
    int c;

    scanf("%d", &c);

    getchar();
    for (int i = 0; i < c; i++) {
        int n;

        scanf("%d", &n);

        int sum = 0;
        int num[1000];

        for (int i = 0; i < n; i++) {
            scanf("%d", &num[i]);

            sum += num[i];
        }

        getchar();

        int avg = sum / n;
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (avg < num[i]) {
                cnt++;
            }
        }

        float result = ((float)cnt / n) * 100;

        printf("%.3f%%\n", result);
    }

    return 0;
}