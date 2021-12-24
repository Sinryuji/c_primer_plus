#include <stdio.h>

int main(void)
{
	int count, sum, read;

	printf("근무일수를 입력하세요: ");
	scanf("%d", &read);

	count = 0;
	sum = 0;

	while(count++ < read)
		sum += count;

	printf("지급 받을 총 임금은 $%d 입니다.\n", sum);

	return 0;
}

