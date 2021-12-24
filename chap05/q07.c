#include <stdio.h>

float cubic(float f);

int main(void)
{
	float read;

	printf("부동소수점수를 하나 입력하세요. :");
	scanf("%f", &read);

	printf("그 수의 세제곱은 %f 입니다.\n", cubic(read));

	return 0;
}

float cubic(float f)
{
	return f * f * f;
}

