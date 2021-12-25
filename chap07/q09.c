#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n);

int main(void)
{
	int n;

	printf("정수를 하나 입력하세요: ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++)
	{
		if(isPrime(i))
			printf("%d  ", i);
	}

	printf("\n");

	return 0;
}

bool isPrime(int n)
{
	if(n == 1)
		return false;

	if(n == 2)
		return true;

	for(int i = 2; i < n; i++)
	{
		if(n % i == 0)
			return false;
	}

	return true;
}

