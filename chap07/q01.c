#include <stdio.h>

int main(void)
{
	char ch;
	int chars = 0;
	int spaces = 0;
	int lines = 0;

	printf("분석할 영어 텍스트를 입력하세요: ");
	
	while((ch = getchar()) != '#')
	{	
		if (ch == '\n')
			lines++;
		if (ch == ' ')
			spaces++;
		else
			chars++;
	}	

	printf("읽은 스페이스수 = %d, 읽은 라인 수 = %d, 읽은 문자 수 %d\n", spaces, lines, chars);

	return 0;
}

