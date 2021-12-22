/* 물 분자의 질량은 약 3.0*10의-23승 그램이다. 물 1쿼트(quart)는 약 950그램이다.
   쿼트 단위로 물의 양을 입력받아, 그 안에 들어 있는 물 문자의 개수를 출력하는 프로그램을 작성하라 */
#include <stdio.h>

int main(void)
{
	int quart;
	
	printf("물이 몇 쿼트 인가요?: ");
	scanf("%d", &quart);
	printf("물 분자의 개수는 %.0f개 입니다.\n", (quart * 950) / 3.0e-23);

	return 0;
}

