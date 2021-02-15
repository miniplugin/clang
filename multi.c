#include <stdio.h> //라이브러리 임포트
int multi(int x, int y); //함수명세선언 = 스프링의 인터페이스와 같은 역할

void main() {
	int a, b, c; //int정수형 변수 a,b,c 선언
	printf("곱하기할 첫번째 수를 입력하세요 : ");
	scanf("%d", &a);// %d 형태중 decimal형-십진수
	printf("곱하기하 두번째 수를 입력하세요 : ");
	scanf("%d", &b);
	c = multi(a,b);//함수호출
	printf("실행결과: %d * %d = %d 입니다.\n", a,b,c);
	// \n은  newLine줄바꿈명령
}

int multi(int x, int y) {
	return (x*y);
}