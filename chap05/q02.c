// 하나의 정수를 요구하여, 그 값부터 시작하여 그 보다 10만큼 큰 값까지의 모든 정수들을 출력하는 프로그램을 작성하라.
#include <stdio.h>

int main(void)
{
 	int num, num2;

	printf("정수를 입력하세요: ");
	scanf("%d", &num);
	num2 = num + 10;

	while(num <= num2)
	{
		printf("%d\n", num);
		num++;
	}

	return 0;
}

