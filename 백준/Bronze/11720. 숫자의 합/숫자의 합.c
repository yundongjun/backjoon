#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    char num[101];

    scanf("%s", &num);

    int result = 0;
    for (int i = 0; i < n; i++) {
        result += num[i] - '0';
    }

    printf("%d", result);

    return 0;
}