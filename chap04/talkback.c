#include <stdio.h>
#include <string.h> // strlen() 프로토타입을 사용하기 위해
#define DENSITY 62.4 // 신체밀도(입방피트당 파운드 수)

int main(void)
{
	float weight, volume;
	int size, letters;
	char name[40];

	printf("하이! 이름이 뭐에요?\n");
	scanf("%s", name);
	printf("%s씨, 몸무게는 몇 파운드나 나가나요?\n", name);
	scanf("%f", &weight);
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("옳거니, %s씨의 몸은 %2.2f입방피트를 차지합니다.\n", name, volume);
	printf("그리고 이름이 %d글자니까,\n", letters);
	printf("저장하려면 %d바이트가 필요합니다.\n", size);

	return 0;
}
