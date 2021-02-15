#include <stdio.h>
#include "factorial.h" //5!팩토리얼 = 5*4*3*2*1

void main() {
	int x;
	printf("팩토리얼을 구할 숫자를 입력하세요: ");
	scanf("%d", &x);//키보드로 입력받은 숫자가 x에 저장, 이후 엔터값\n 이 남아있습니다.
	printf("%d! = %d\n", x, factorial(x));
	getchar();//입력 후 엔터 키를 공백으로 처리
}