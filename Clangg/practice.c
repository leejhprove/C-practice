#include <stdio.h>
//아무키나 누르게 한뒤 입력을 받아 넘어가게 하세요
int main(void)
{
	char ch = 0;

	printf("아무키나 누르세요: \n");
	ch = getchar();

	printf("입력받은 키는 \n");
	putchar(ch);
	printf("입니다. \n");
	
	return 0;

}
