#include <stdio.h>

int main (void)
{
	char ch = 0;// ���� ���� +���� Char �ڷ��� // �ڷ��� �̸� = 0; 

	ch = getchar(); //getchar(); �Լ��� ���Ͽ��� �ѱ��ڸ� �������� �Լ�
	putchar(ch);	//putchar(); ()�ȿ� �ѱ��ڸ� write�ض�.
	putchar('z\n');
	putchar('A');
	return 0;
 // ��¶� ���޾� ������ ���� �������� ������ �츮 �ڵ忡�� ���Ϳ� ���� �ڵ尡
	//���� ������ �׷���.
}