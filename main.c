#include <stdio.h>
#include <string.h>
int main() {
	char str_create[100] = "";
	char* createString = str_create;
	char str_add[100] = "";
	char* addString = str_add;
	addString = "(";
	createString = strcat(createString,addString);
	createString = strcat(createString,")");
	printf("%s\n", createString);
	return 0;
}
/*
int main(int argc, char* argv[]) {
	printf("Hello, goorm!\n");
	char tmp[100];
	char test[] = {'a','b','c','d'};
	strncpy(tmp, test, 4);
	printf("결과 %s\n", tmp);
	return 0;
}*/
//누적함수 사용의미
/*
char* testLoop(int n);
char str[80]="";
char* w = str;
//char* w=""; w포인터변수 외부(전역변수)에 있으면, main함수를 2번 돌리면 aaaaaa
int main() { //w포인터변수가 내부에 있으면, main함수를 2번 돌려도 aaa
	char str[80]="";
	char* result = str;
	result = testLoop(3);
	printf("%s\n", result);//aaa
	result = testLoop(3);
	printf("%s\n", result);//aaaaaa
	return 0;
}

char* testLoop(int n) {
	
	for(int i=0; i<n; i++) {
		strcat(w,"a");
	}
	return w;
}

void test() {
//카카오 시험 C언어 포인터 변수 주소를가지기 때문에 주소를 각각만들어야 함.
	//자바의 substring대체하는 strncpy함수의 사용: (출력변수, 포인터변수명+인덱스시작위치, 출력할개수)
	//C에는 스트링변수가 없기때문에 누적할때, strcat()함수를 사용, 전역변수가 필요할 수 있습니다.
	//문자열비교: strcmp("(",u)==0 비교결과가 참일때 0, 단 문자비교는 if(c == 'c')
	//비교구문 w == NULL || strlen(w)==0
	char str1[100] = "";
	char str2[100] = "";
	char str3[100] = "";
  char* w = str1;//포인터변수는 데이터가 아닌 주소정보를 가진 변수
	char* u = str2;
	char* v = str3;
	w = "abcdefg";
	strncpy(u, w+1, 2); // bc
	strncpy(v, w+3, 2); // de
	printf("%s\n",u);
	printf("%s\n",v);
	return 0;
}
//메모리 청소하기
free(w);free(u);free(v);
*/