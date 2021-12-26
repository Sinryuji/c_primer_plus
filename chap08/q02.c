#include <stdio.h>

int main(void)
{
	int ch;
	int upperCnt = 0;
	int lowerCnt = 0;
	
	while((ch = getchar()) != EOF)
	{
		if(ch >= 'A' && ch <= 'Z')
			upperCnt++;
		else if(ch >= 'a' && ch <= 'z')
			lowerCnt++;
	}

	printf("\n대문자의 개수는 %d개, 소문자의 개수는 %d개 입니다.\n", upperCnt, lowerCnt);

	return 0;
}

