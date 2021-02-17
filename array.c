#include <stdio.h>
void main() {
	int score[5];//배열의 크기지정 공간5개
	int sum=0, cnt;//변수 선언하면서 초기값 지정.
	for(cnt=0;cnt<5;cnt++) {
		printf("입력(점수 %d)=>", cnt+1);
		scanf("%d",&score[cnt]);//score[0], score[1]...,score[4] 총 5개 입력받기
	}
	
	for(cnt=0;cnt<5;cnt++) {
		sum += score[cnt];// sum = sum + score[cnt]; 누적시키는 로직 = 총점구하기
	}
	printf("총점=%d, 평균=%d \n", sum, sum/cnt);
}