#include <stdio.h>

int main(void)
{
    int k = 0;
    char str[1000001];

    int not_empty = 0;
    while (1) {
        scanf("%c", &str[k]);

        if (((str[k] >= 'a' && str[k] <= 'z') || (str[k] >= 'A' && str[k] <= 'Z'))) {
            not_empty = 1;
        }

        if (str[k] == '\n') {

            if (str[k - 1] == ' ') {
                k--;
            }

            break;
        }
        k++;
    }

    int result = 0;
    for (int i = 1; i < k - 1; i++) {

        if (((str[i - 1] >= 'a' && str[i- 1] <= 'z') || (str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
            && str[i] == ' '
            && ((str[i + 1] >= 'a' && str[i + 1] <= 'z') || (str[i + 1] >= 'A' && str[i + 1] <= 'Z'))) {

            result++;
        }
    }

    if (!not_empty) {
        result--;
    }

    printf("%d", result + 1);

    return 0;
}