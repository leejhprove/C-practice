#include <stdio.h>
#include <conio.h>
//_getch, _getche example
int main(void)
{
	char ch = 0;
	printf("�ƹ�Ű�� ��������. \n");

	ch = _getch();

	printf("�Է��� Ű��: ");
	putchar(ch);
	printf("�Դϴ�. \n");
	return 0;
}