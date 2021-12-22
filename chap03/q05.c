// 1년은 약 3.156x10의7승초에 해당한다. 나이를 햇수로 입력 받아, 초 단위로 출력하는 프로그램을 작성하라.
#include <stdio.h>

int main(void)
{
	int age;

	printf("나이를 입력하세요: ");
	scanf("%d", &age);
	printf("나이를 초로 환산하면, %.0f초 입니다\n", age * 3.156e7);

	return 0;
}

