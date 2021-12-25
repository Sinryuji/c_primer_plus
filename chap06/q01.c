// 26개의 원소를 가지는 배열을 만들고, 그 배열에 26개의 알파벳 소문자를 저장하는 ㅡㅍ로그램을 작성하라.
#include <stdio.h>
#define SIZE 26

int main(void)
{
	char alphabet[SIZE];
	int i, j;

	for(i = 'a', j = 0; j < SIZE; i++, j++)
	       alphabet[j] = i;
	
	for(i = 0; i < SIZE; i++)
		printf("%-3c", alphabet[i]);

	printf("\n");

	return 0;
}

