// 먼저 이름을 요청하고, 이어서 다시 성을 요청한다. 그러고 나서 성, 이름 순으로 출력하는 프로그램을 작성하라.
#include <stdio.h>

int main(void)
{
	char firstName[40];
	char lastName[40];

	printf("이름을 입력하세요: ");
	scanf("%s", lastName);

	printf("성을 입력하세요: ");
	scanf("%s", firstName);

	printf("당신의 이름은 %s %s 입니다.\n", firstName, lastName);

	return 0;
}

