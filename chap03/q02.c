/* 66과 같은 ASCII 코드값을 사용자에게 입력하도록 요청하고, 
그 ASCII 코드 값에 해당하는 문자를 출력하는 프로그램을 작성하라. */
#include <stdio.h>

int main(void)
{
	int n;

	printf("ASCII 코드 값을 입력하세요 : ");
	scanf("%d", &n);

	printf("%c\n", n);

	return 0;
}

