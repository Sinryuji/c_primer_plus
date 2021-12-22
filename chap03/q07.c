// 1인치는 2.54센티미터이다. 키를 센티미터 단위로 입력받아 인치 단위로 출력하는 프로그램을 작성하라.
#include <stdio.h>

int main(void)
{
	int centimeter;

	printf("키가 몇 센티미터 인가요?: ");
	scanf("%d", &centimeter);
	printf("키를 인치 단위로 환산하면, %g인치 입니다.\n", centimeter * 2.54);

	return 0;
}

