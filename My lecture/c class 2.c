#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int p1() {
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

int p2() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("sum %d\navg %d", a + b + c + d, (a + b + c + d) / 4);
}
int main() {
	p2();

	return 0;
}