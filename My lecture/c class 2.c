#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int p2() {
	int x = 0x7fffffff;
	char y = 127;
	printf("%d", x);
	x++;
	printf("%d\n", x);
	printf("%c\n", y);
	printf("%d", y);
	y++;
	printf("%d\n");

	return 0;
}
int main() {
	p2();
}