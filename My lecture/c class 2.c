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

int p11() {
	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	printf("%d %d %d %d %d", a + 3, b - 3, c * 3, d / 3, e % 3);

	return 0;
}

int p12() {
	int a = 10, b = 10;
	printf("최촛값 a = %d b = %d\n\n\n", a, b);
	printf("a++ = %d ++b = %d\n", a++, ++b);
	printf("실행후 a = %d b = %d\n\n\n", a, b);
	printf("a-- = %d --b = %d\n",a--, --b);
	printf("실행후 a = %d b = %d\n\n\n", a, b);

	return 0;
}

int p13() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d %d", a += 100, b /= 10);

	return 0;
}

int p14() {
	printf("%s\n%d\n%f\n%f\n%d + %d = %d\n%s", "수를 출력할때는 따옴표를 생략합니다.", 123, 6.5, 68.6, 10, 5, 10 + 5, "내 생일은 2005년 03월 18일 입니다.");

	return 0;
}

int p15() {
	int a;
	scanf("%d", &a);
	printf("%d초는 %d분 %d초 입니다.", a, a / 60, a % 60);

	return 0;
}

int main() {
	p14();

	return 0;
}