#include <stdio.h>
int* userSort(int Numbers[], int n);//인터페이스

int main() {
	int n[100]={0};
	int s[20]={0};
	int n_amount=0;
	scanf("%d",&n_amount);
	for(int i=0;i<n_amount;i++){
		scanf("%d",&n[i]);
		s[n[i]]++;
		//printf("%d ",n[i]);문제 난이도 배열값 확인용도
	}
	// 정렬함수 호출(아래)
	userSort(n,n_amount);
	int si=0;
	for(int i=0;i<20;i++){
		if(s[i]!=0){
			si++;
		}
		if(si>=3){
			printf("YES");
			return 0;
		}
	}
	printf("NO");
	return 0;
}

// 배열을 정렬시키는 함수(아래)
int* userSort(int Numbers[], int n) {
	int prev, next, Temp;
	//이중for문을 이용한 정렬로직(아래)
	for(prev=0; prev<n-1; prev++) {
		for(next=prev+1; next<n; next++) {
			if(Numbers[prev]>Numbers[next]) {
				Temp = Numbers[prev];
				Numbers[prev] = Numbers[next];
				Numbers[next] = Temp;
			}
		}
	}
	return Numbers;
}