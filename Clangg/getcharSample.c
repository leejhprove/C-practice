#include <stdio.h>

int main (void)
{
	char ch = 0;// 변수 선언 +정의 Char 자료형 // 자료형 이름 = 0; 

	ch = getchar(); //getchar(); 함수는 파일에서 한글자만 가져오는 함수
	putchar(ch);	//putchar(); ()안에 한글자를 write해라.
	putchar('z\n');
	putchar('A');
	return 0;
 // 출력때 연달아 나오는 것은 엔터조차 정보고 우리 코드에서 엔터에 대한 코드가
	//없기 때문에 그렇다.
}