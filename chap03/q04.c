/* 부동소수점 수를 하나 읽고, 처음에는 소수점 표기로, 다음에는 지수 표기로,
   그 다음에는 시스템이 지원한다면 p 표기로 출력하는 프로그램을 작성하라. */
#include <stdio.h>

int main(void)
{
	float n;

	printf("부동소수점 수를 입력하시오: ");
	scanf("%f", &n);
	printf("고정소수점 표기: %.7f\n", n);
	printf("지수 표기: %e\n", n);
	printf("p 표기: %p\n", n);

	return 0;
}

