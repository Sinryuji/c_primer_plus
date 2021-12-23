/* 인치 단위의 키와, 이름을 요청하여 그 정보를 다음과 같은 포맷으로 출력하는 프로그램을 작성하라
Dabney씨, 당신의 키는 176 미터 입니다. */
#include <stdio.h>

int main(void)
{
	float height;
	char name[40];

	printf("당신의 키를 인치 단위로 입력하세요.: ");
	scanf("%f", &height);

	printf("당신의 이름을 입력하세요.: ");
	scanf("%s", name);

	printf("%s 씨, 당신의 키는 %g 미터 입니다.\n", name, height * 2.54);

	return 0;
}

