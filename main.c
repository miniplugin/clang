#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
	printf("Hello, goorm!\n");
	char tmp[100];
	char test[] = {'a','b','c','d'};
	strncpy(tmp, test, 4);
	printf("결과 %s\n", tmp);
	return 0;
}