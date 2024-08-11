#include <stdio.h>
#include <conio.h>
//_getch, _getche example
int main(void)
{
	char ch = 0;
	printf("아무키나 누르세요. \n");

	ch = _getch();

	printf("입력한 키는: ");
	putchar(ch);
	printf("입니다. \n");
	return 0;
}