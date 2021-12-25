#include <stdio.h>
#define FIRST300 0.85
#define SECOND150 0.8
#define REMAIN 0.75
#define NORMAL 10

int main(void)
{
	int time;
	float salary;
	
	printf("일주일 동안 일한 시간을 입력하세요: ");
	scanf("%d", &time);

	if(time <= 40)
		salary = time * NORMAL;
	else
		salary = (40 * NORMAL) + ((time - 40) * (NORMAL * 1.5));

	if(salary <= 300)
		salary *= FIRST300;
	else if(salary <= 450)
		salary = (300 * FIRST300) + ((salary - 300) * SECOND150);
	else
		salary = (300 * FIRST300) + (150 * SECOND150) + ((salary - 450) * REMAIN);

	printf("당신의 급여는 $%.2f 입니다.\n", salary); 

	return 0;
}

