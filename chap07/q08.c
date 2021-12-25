#include <stdio.h>
#define FIRST300 0.85
#define SECOND150 0.8
#define REMAIN 0.75

int main(void)
{
	int time, prev, select;
	float salary, normal;

	while(select != 5)
	{
	prev = select;

	printf("*********************************************************************\n"
	       "자신의 기본급에 해당하는 번호를 선택하시오(끝내려면 5번을 선택하시오):\n");
	printf("1) 시간당 $8.75                       2) 시간당 $9.33\n"
	       "3) 시간당 $10.00                      4) 시간당 $11.20\n"
	       "5) 종료\n"
	       "*********************************************************************\n"); 
	scanf("%d", &select);
	}

	switch(prev)
	{
		case 1 : normal = 8.75;
			 break;
		case 2 : normal = 9.33;
			 break;
		case 3 : normal = 10.00;
			 break;
		case 4 : normal = 11.20;
	}
	
	printf("일주일 동안 일한 시간을 입력하세요: ");
	scanf("%d", &time);

	if(time <= 40)
		salary = time * normal;
	else
		salary = (40 * normal) + ((time - 40) * (normal * 1.5));

	if(salary <= 300)
		salary *= FIRST300;
	else if(salary <= 450)
		salary = (300 * FIRST300) + ((salary - 300) * SECOND150);
	else
		salary = (300 * FIRST300) + (150 * SECOND150) + ((salary - 450) * REMAIN);

	printf("당신의 급여는 $%.2f 입니다.\n", salary);

	return 0;
}

