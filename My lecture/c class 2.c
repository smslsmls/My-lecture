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
	printf("%d\n", y);

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

	return 0;
}

int p5() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d %d\n", ++a, b);
	printf("%d %d", a, --b);
	return 0;
}

int p6() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d", ((a > c) && (b > d)));

	return 0;
}

int p7() {
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = ++a + b--;
	printf("a = %d b = %d c = %d", a, b, c);

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
	printf("a-- = %d --b = %d\n", a--, --b);
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

int p16() {
	char a = 'A';
	while (a <= 'Z')
		printf("%c", a++);

	return 0;
}

int p17() {
	int num = 0, sum = 0;
	while (num++ < 10)
		sum += num;
	printf("%d %d", sum, num);

	return 0;
}

int p18() {
	int N;
	int t = 0;
	int sum = 0;
	scanf("%d", &N);
	while (t++ < N)
		sum += t;
	printf("%d", sum);

	return 0;
}

int p19() {
	int N;
	int t = 0;
	scanf("%d", &N);
	while (t < N)
		printf("%d\n", t++);

	return 0;
}

int p20() {
	int N;
	int t=0;
	scanf("%d", &N);
	while (t++ < 9)
		printf("%d * %d = %d\n", N, t, N * t);

	return 0;
}

int p21() {
	for (int i = 1; i < 20; i+=2)
	{
		printf("%d ", i);
	}

	return 0;
}

int p22() {
	int N;
	for (int i = 0; i < N; i++)
	{
		printf("%d\n", i);
	}
	return 0;
}

int p23() {
	int N;
	printf("단을 입력하세요 : ");
	scanf("%d", &N);
	for (int i = 1; i <= 9; i++)
	{
		printF("%d X %d = %d\n", N, i, N * i);
	}

	return 0;
}

int p24() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

int p25() {
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", i + 1);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", j + 1);
		}
		printf("\n");
	}

	return 0;
}

int main() {
	p20();

	return 0;
}