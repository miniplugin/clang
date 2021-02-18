/** 키보드로 입력받은 문자열을 컴퓨터가 알아듣는 아스키코드로 변경하는 프로그램 **/
#include <stdio.h>
#include <string.h>
void main() {
	char buffer[80];
	char *p=buffer;//포인터변수 생성 및 크기지정
	int len, cnt=0;//입력받은 문자열을 아스키코드로 변경할때 반복구문에 사용
	while(1) {
		printf("문자열을 입력하세요(종료하려면 Ctrl+C 누르세요) : ");
		scanf("%s", p);//키보드로 입력받아서 *p변수의 주소에 값을 저장합니다.
		//반복구문시작(아래)
		len = strlen(p);//문자열의 길이를 구하기
		while(cnt<len) { //cnt 0부터 비교기준인 len문자열의 길이값 전까지 출력
			printf("%d   ", *p);//현재 p주소의 값은 %c사람문자, %d아스키코드로 출력
			p=p+1;//p어드레스인덱스주소는 컴퓨터가 비어있는 메모리주소를 찾아서 부여
			cnt=cnt+1;
		}
		printf("\n");
		cnt=0;//무한바복때문에 초기화 시킴
	}
}