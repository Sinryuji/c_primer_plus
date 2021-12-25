#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[40];

	printf("단어 하나를 입력하세요: ");
	scanf("%s", str);

	for(int i = strlen(str) - 1; i > -1; i--)
		printf("%c", str[i]);

	printf("\n");

	return 0;
}

