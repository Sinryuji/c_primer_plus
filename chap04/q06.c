/* 먼저 이름을 요청하고, 이어서 다시 성을 요청한다. 입력된 성과 일므을 한 라인에 출력하고, 그 다음 라인에는
   성과 이름을 구성하는 글자 수를 성과 이름의 끝 글자에 맞추어 출력하라. 그러고 나서 이번에는, 같은 정보를
   출력하되 글자 수를 성과 이름의 첫 글자에 맞추어 출력하라 */
#include <stdio.h>
#include <string.h>

int main(void)
{
	char firstName[40];
	char lastName[40];
	int firstLength;
	int lastLength;

	printf("이름을 입력하세요.: ");
	scanf("%s", lastName);

	printf("성을 입력하세요.: ");
	scanf("%s", firstName);

	firstLength = strlen(firstName);
	lastLength = strlen(lastName);
	
	printf("%s %s\n%*d %*d\n", firstName, lastName, firstLength, firstLength, lastLength, lastLength);
	printf("%s %s\n%-*d %-*d\n", firstName, lastName, firstLength, firstLength, lastLength, lastLength);

	return 0;
}

