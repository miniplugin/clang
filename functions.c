#include <stdio.h>
#include <string.h> // strlen(문자열길이함수), strcmp(문자열의비교함수)
//문자열의 길이를 구하는 프로그램.
void main() {
	char string[200];//200바이트크기의 char형 변수명 string을 배열변수로 생성.
	printf("문자를 입력한 후, 엔터키를 치면 입력한 문자열의 길이가 출력됩니다.\n");
	printf("stop 문자를 입력하면 프로그램이 종료 됩니다.\n");
	do {
		scanf("%s", &string);
		if(strcmp("stop",string)==0) { 
			//0은 true-false아니고, 인덱스0번값이 있다는 것/ 일치하는 값이 없으면 -1인덱스값
			printf("프로그램을 종료 합니다\n");
			break;//do~while문을 빠져 나갑니다.
		}
		printf("입력하신 문자열의 길이는 %d 입니다.\n", strlen(string));
		
	}while(1);//while조건이 1(true)이기때문에 무한루프를 돕니다.
}