#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	scanf("%s", &str);
	
	for (int i = 0; i < strlen(str) / 2; i++) {
		if (str[i] != str[strlen(str) - 1 - i]) {
			printf("0");
			return 0;
		}
	}

	printf("1");
	return 0;
}

