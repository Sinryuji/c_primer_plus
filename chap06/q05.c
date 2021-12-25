#include <stdio.h>

int main(void)
{
	int i, j, n;
	char ch;

	printf("문자를 하나 입력하세요(A ~ Z): ");
	scanf("%c", &ch);
	n = ch - 64;
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n - i - 1; j++)
			printf(" ");

		for(j = 0, ch = 'A'; j <= i; j++, ch++)
			printf("%c", ch);
		
		ch -= 2;

		for(j = 0; j < i; j++, ch--)
			printf("%c", ch);
		
		printf("\n");
	}

	return 0;
}

