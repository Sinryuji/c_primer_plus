#include <stdio.h>
#define SPACE ' '

int main(void)
{
	char ch;

	ch = getchar();                        // 문자 하나를 읽는다
	while (ch != '\n')                     // 라인의 끝이 아닌 동안
	{
		if (ch == SPACE)               // 스페이스는 그대로 둔다
			putchar(ch);           // 변경하지 않고 출력한다
		else
			putchar(ch + 1);       // 다른 문자들은 변경한다
		ch = getchar();                // 다음 문자를 얻는다
	}
	putchar(ch);                           // 개행을 출력한다

	return 0;
}

