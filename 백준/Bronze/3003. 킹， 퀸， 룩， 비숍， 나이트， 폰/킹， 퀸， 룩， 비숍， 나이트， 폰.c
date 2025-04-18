#include <stdio.h>

int main(void)
{
    int king, queen, luck, bishum, night, phone;

    scanf("%d", &king);
    scanf("%d", &queen);
    scanf("%d", &luck);
    scanf("%d", &bishum);
    scanf("%d", &night);
    scanf("%d", &phone);

    printf("%d %d %d %d %d %d", 1 - king, 1 - queen, 2 - luck, 2 - bishum, 2 - night, 8 - phone);

    return 0;
}