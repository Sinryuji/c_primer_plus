// 하나의 부동소수점 수를 읽고, 그것을 먼저 소수점 표기로 출력하고, 이어서 지수 표기로 출력하는 프로그램을 작성하라.
#include <stdio.h>

int main(void)
{
	float read;

	printf("부동소수점 수를 하나 입력하세요.: ");
	scanf("%f", &read);

	printf("입력된 것은 %.1f 또는 %.1e이다.\n", read, read);
	printf("입력된 것은 %+.3f 또는 %.3E이다. \n", read, read);

	return 0;
}

