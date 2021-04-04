#include <stdio.h>
#include <stdbool.h>
//기술참조 https://blog.naver.com/PostView.nhn?blogId=thebaleuncoding&logNo=222128076513
int n;
int Lotto[];
bool Real;
bool isValid(int Lotto[], int size);
int main() {
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		scanf("%d", &Lotto[i]);
	}
	Real = isValid(Lotto, n);
	if(Real == true) {
		printf("Result = True");
	}else{
		printf("Reault = False");
	}
	return 0;
}

bool isValid(int Lotto[], int size) {
	if(size != 6) {
			return false;
	}
	for(int i=0; i<n-1; i++) {
		if(Lotto[i] == Lotto[i+1]	)	return false;
	}
	for(int i=0; i<n; i++) {
		if(Lotto[i] < 1 || Lotto[i] > 45)	return false;
	}
	for(int i=0; i<n-1; i++) {
		if(Lotto[i] > Lotto[i+1]	)	return false;	
	}
	return true;
}
