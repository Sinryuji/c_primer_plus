#include <stdio.h>

int main(void)
{
	int i, j;
	char ch;

	for(i = 0; i < 6; i++)
	{
		for(j = 0, ch = 'F'; j <= i; j++, ch--)
			printf("%c", ch);
		printf("\n");
	}

	return 0;
}

