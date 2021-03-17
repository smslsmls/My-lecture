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

int p7() {
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = ++a + b--;
	printf("a = %d b = %d c = %d",a, b, c);

	return 0;
}

int p8() {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("avg = %.1f", (a + b + c) / 3);

	return 0;
}

int p9() {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("sum = %d avg = %d", (int)(a + b + c), (int)((a + b + c) / 3));

	return 0;
}

int p10() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d %d %d %d", (a > b), (b >= c), (a <= b), (b < c));

	return 0;
}

int main() {


	return 0;
}