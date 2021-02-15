#include <stdio.h>

void main() {
	int a,b;
	printf("입력(integer)==>");  //표준출력 Standard Output 함수
	scanf("%d", &a);//표준입력 Standard Input scanf함수는 변수사용시 &기호가
	//%decimal 10진수형태로 입-출력 받겠다고 명시.
	printf("입력(정수형)==>");
	scanf("%d", &b);
	
	//위에서 키보드로 입력받은 변수 a, b를 출력하겠다.(아래)
	printf("\n a=%d, b=%d \n", a, b);
	//System.out.println(자바) = printf(C언어\n);
}