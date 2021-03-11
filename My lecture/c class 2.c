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
	return 0;
}

int p3() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d / %d = %d...%d", a, b, a / b, a % b);
	return 0;
}

int p4() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("width = %d\nlength = %d\narea = %d", a += 5, b *= 2, a * b);
}

int p5() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d %d\n", ++a, b);
	printf("%d %d", a, --b);
}

int p6() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d",((a > c) && (b > d)));
}

int main() {
	p6();

	return 0;
}