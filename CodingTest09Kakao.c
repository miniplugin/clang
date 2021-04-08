#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//전역변수특이사항: 함수의 리턴값이 배열일 경우 포인터변수로 만들어야 함.
char str[100]="";
char str_w[100]="";
char str_r[100]="";
char* endString = str;//포인터변수 endString는 str의 주소값이 저장됨
char* w = str_w;// str과 주소를 틀리게 하는 방법
char* r = str_r;// 포인터변수의 저장주소가 틀리게 변경
//인터페이스=함수정의 4개
char* recursive(char w[]);//재귀함수
int getBalancedIndex(char w[]);
bool isValidString(char u[]);
char* reArrange(char u[]);

int main() {
	scanf("%s", w);//특이사항. 배열변수(포인터)는 &가 붙지 않음.
	r = recursive(w);
	if(strcmp(w,r)==0) {
		printf("올바른 괄호문자열 입니다. %s", r);
	}else{
		printf("잘못된 괄호문자열 입니다. 입력값 %s, 출력값 %s", w, r);
	}
	return 0;
}

char* recursive(char w[]) {
	if(w == NULL || strcmp(w,"")==0) {
		return strcat(w, endString);
	}
	int balacedIndex = getBalancedIndex(w);
	//char *u = malloc(strlen(w) + 1);//u포인터변수의 주소지정 malloc 메모리얼로우케이션 함수사용
	char str_u[100] = "";
	char str_v[100] = "";
	char *u = str_u;
	char *v = str_v;
	strncpy(u, w, balacedIndex+1);//예, abc => a , bc
	strncpy(v, w+balacedIndex+1, strlen(w)-balacedIndex+1);//v = w - u 나머지 값이 v
	bool isValidCheck = isValidString(u);	
	printf("w는 %s, u는 %s, v는 %s, isValidCheck는 %d\n", w, u, v, isValidCheck);
	if(isValidCheck) {
		//Unit값이 ( 문자 하나라면 균형문자 추가 20210407(수) 문자열처리 문제있음.
		if(strcmp("(",u)==0) { 
			endString = strcat(endString,")"); 
		}
		u = strcat(u,recursive(v));//문자열누적 +=(자바가능, C불가능)
		return u;
	}else{
		char str_create[1000] = "";
		char* createString = str_create;
		char str_add[100] = "";
		char* addString = str_add;
		addString = "(";
		createString = strcat(createString,addString);//strcat(최초앞자리는빈것+대용량변수, 더하는변수)
		createString = strcat(createString,recursive(v));
		createString = strcat(createString,")");
		createString = strcat(createString, reArrange(u));
		return createString;	
	}
}
char* reArrange(char u[]) {
	//char* arrangeString = malloc(strlen(u) + 1);
	char str_arrange[100] = "";
	char* arrangeString = str_arrange;
	for(int i=1; i<strlen(u)-1; i++) {
		if(u[i] == '(') {
			strcat(arrangeString,")");
		}else if(u[i] == ')') {
			strcat(arrangeString,"(");
		}
	}
	return arrangeString;
}
bool isValidString(char u[]) {
	int balanceCount = 0;
	for(int i=0; i<strlen(u); i++) {
		if(u[i] == '(') {
			balanceCount++;
		}else if(u[i] == ')') {
			balanceCount--;
		}
		if(balanceCount < 0) {
			return false;
		}
	}
	return true;
}
int getBalancedIndex(char w[]) {
	int index = 0, balanceCount = 0;
	for(int i=0; i<strlen(w); i++) {
		if(w[i] == '(') {
			balanceCount++;
		}else if(w[i] == ')') {
			balanceCount--;
		}
		if(balanceCount == 0) {
			index = i;
			break;
		}
	}
	return index;
}