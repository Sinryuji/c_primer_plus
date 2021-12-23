// 다운로드 속도가 초당 몇 메가비트 인지와 파일 크기가 몇 메가바이트 인지 입력하도록 요청하는 프로그램을 작성하라.
#include <stdio.h>

int main(void)
{
	float speed;
	float size;

	printf("다운로드 속도가 몇 메가비트 인가요?: ");
	scanf("%f", &speed);

	printf("파일 크기가 몇 메가바이트 인가요?: ");
	scanf("%f", &size);

	printf("초당 %.2f 메가비트, %.2f 메가바이트 파일을\n%.2f초에 다운로드한다.\n", speed, size, size * 8 / speed);

	return 0;
}

