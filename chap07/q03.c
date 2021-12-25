#include <stdio.h>

int main(void)
{
	int n;
	int evenCnt = 0;
	int evenSum = 0;
	int oddCnt = 0;
	int oddSum = 0;

	printf("정수를 입력하세요(0 입력시 종료): ");

	while(scanf("%d", &n) == 1 && n != 0) 
	{
		if(n % 2 == 0)
		{
			evenCnt++;
			evenSum += n;
		}
		else
		{
			oddCnt++;
			oddSum += n;
		}
	}

	printf("짝수의 개수는 %d, 평균은 %.2f, 홀수의 개수는 %d, 평균은 %.2f\n", evenCnt, (float) evenSum / evenCnt, oddCnt, (float) oddSum / oddCnt);

	return 0;
}

