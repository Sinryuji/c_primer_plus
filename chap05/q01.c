// 분수로 주어지는 시간을 시간 수와 분 수로 변환하는 프로그램을 작성하라.
#include <stdio.h>
#define MINTOHOUR 60

int main(void)
{
	int min = 1;

	while(min > 0)
	{
		printf("시간을 분수로 입력하시오.: ");
		scanf("%d", &min);
		printf("입력하신 시간은 %d분 %d초 입니다.\n", min / MINTOHOUR, min % MINTOHOUR);
	}

	return 0;
}

