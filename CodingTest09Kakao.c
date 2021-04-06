#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//전역변수특이사항: 배열의 리턴값(변수=값)을 사용할 경우 포인터변수로 만들어야 함.
//char endString[];//전역변수 사용시 포인터 변수로 해야 함.
//char endString[]={'K','i','t','t','y'};
char* endString="";//전역변수 사용시 포인터 변수로 해야 함.
//인터페이스=함수정의 3개
char* recursive(char w[]);
int getBalancedIndex(char w[]);
bool isValidString(char u[]);
char* reArrange(char u[]);
int main() {
	int n;//배열크기를 지정하는 변수
	char w[n];//초기 코드소스 입력값
  char* r;//최종 리턴값은 포인터로 변경
	scanf("%s", w);//특이사항. 배열변수는 &가 붙지 않음.
	r = recursive(w);
	//printf("디버그 %s\n", r);
	if(w == r) {
		printf("올바른 괄호문자열 입니다. %s", r);
	}else{
		printf("잘못된 괄호문자열 입니다. 입력값 %s, 출력값 %s", w, r);
	}
	return 0;
}
char* recursive(char w[]) {
	if(w=="") {
		return strcat(w,endString);
	}else{
		int balacedIndex = getBalancedIndex(w);
	}
	return strcat(w,endString);
}
char* reArrange(char u[]) {
	int n;//배열크기를 지정하는 변수
	char arrangeString[n];
	
	return arrangeString;
}
bool isValidString(char u[]) {
	
	return true;
}
int getBalancedIndex(char w[]) {
	int index = 0, balancedCount = 0, n;
	for(int i=0; i<strlen(w); i++) {
		char tmpChar[n];
		strncpy(tmpChar, w, i);//20210406 1개X a, ab, abc 누적X 1개씩 나와야함.
		printf("%s\t", tmpChar);
	}
	return index;
}