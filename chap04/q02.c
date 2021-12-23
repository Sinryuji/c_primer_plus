// 이름을 요청하고, 그 이름을 다음과 같은 포맷으로 출력하는 프로그램을 작성하라.
#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[40];

	printf("당신의 이름은 무엇인가요?: ");
	scanf("%s", name);

	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("%*s\n", (int)strlen(name) + 3, name);

	return 0;
}
