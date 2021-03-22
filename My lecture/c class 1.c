#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#define INT_MAX 0x7fffffff

typedef long long ll;
typedef long double ld;

//plus, minus
int pm() {
	int n1 = 1;
	printf("n1 = %d", n1);
	n1++;
	printf("n1 = %d", n1++);
	printf("n1 = %d", n1);

	return 0;
}
//compare
int comp() {
	int n1 = 1, n2 = 2;
	int result = 0;
	printf("result = %d\n", result);
	result = (n1 == n2);
	printf("result = %d\n", result);

	n2 = 1;
	result = (n1 == n2);
	printf("result = %d\n", result);

	return 0;
}
//Four rule calculation
int calculation() {
	ld a, b;
	scanf("%Lf %Lf", &a, &b);
	printf("plu : %.2Lf\nmin : %.2Lf\nmul : %.2Lf\ndiv : %.2Lf\n", a + b, a - b, a * b, a / b);
	return 0;
}
//integer, real number
int valuetype() {
	short i1 = 0;
	int i2 = 0;
	long i3 = 0;
	ll i4 = 0;//integer
	float r1 = 0.0;
	double r2 = 0.0;
	ld r3 = 0.0;//real number

	return 0;
}
//for
int repeat() {
	double n = 0.0;
	for (int i = 0; i < 100; i++)
	{
		n += 0.1;
	}
	printf("%lf", n);

	return 0;
}
//bit operator
int bitwise() {
	int num1 = 15;
	int num2 = 20;
	printf("AND 연산의 결과 : %d\n", num1 & num2);
	printf("OR 연산의 결과 : %d\n", num1 | num2);
	printf("XOR 연산의 결과 : %d\n", num1 ^ num2);
	printf("NOT 연산의 결과 : %d\n", ~num1);
	printf("bit 이동 왼쪽 1 : %d\n", 1 << 1);
	printf("bit 이동 왼쪽 2 : %d\n", 1 << 2);
	printf("bit 이동 왼쪽 3 : %d\n", 1 << 3);
	printf("bit 이동 왼쪽 4 : %d\n", 1 << 4);
	printf("bit 이동 왼쪽 14 : %d\n", 1 << 14);
	printf("bit 이동 오른쪽 1 : %d\n", 2048 >> 1);
	printf("bit 이동 오른쪽 2 : %d\n", 2048 >> 2);
	printf("bit 이동 오른쪽 3 : %d\n", 2048 >> 3);
	printf("bit 이동 오른쪽 4 : %d\n", 2048 >> 4);
	printf("bit 이동 오른쪽 14 : %d\n", 2048 >> 14);
	return 0;
}
//sizeof operator
int size() {
	char ch = 9;
	int n = 9;
	double d = 9;
	printf("ch의 크기 : %d\n", sizeof(ch));
	printf("n의 크기 : %d\n", sizeof(n));
	printf("d의 크기 : %d\n", sizeof(d));
	printf("상수 9의 크기 : %d\n", sizeof(9));
	printf("상수 9.1234의 크기 : %d\n", sizeof(9.1234));

	return 0;
}
//ascii codes
int ascii() {
	int n;
	char str;
	scanf("%d", &n);
	printf("ASCII 문자 : %c\n", n);
	scanf(" %c", &str);
	printf("ASCII 숫자 : %d\n", str);

	return 0;
}
//change type
int ch() {
	int n1 = 1, n2 = 2;
	double n;
	n = n1 / n2;
	n = (double)n1 / n2;

	return 0;
}
//format specifier(서식 지정자)
int format() {
	double d1 = 1.23e-3;
	printf("%f\n", d1);
	printf("%e\n", d1);
	printf("%g\n", d1);
	double d2 = 1.234567e-3;
	printf("%f\n", d2);
	printf("%e\n", d2);
	printf("%g\n", d2);
	double d3 = 0.01234567;
	printf("%f\n", d3);
	printf("%e\n", d3);
	printf("%g\n", d3);

	return 0;
}



int p1() {
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	printf("%d\n", n1 | n2);

	return 0;
}

int p2() {
	int n;
	scanf("%d", &n);
	n = ~n;
	n++;
	printf("%d", n);
	return 0;
}

int p3() {
	int n = 3;
	n = n << 3;
	n = n >> 2;
	printf("%d", n);
}

int p4() {
	double r;
	scanf("%lf", &r);
	printf("%.2f", r * r * 3.14);

	return 0;
}

int p5() {
	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;

	printf("%c %d\n", ch1, ch1);
	printf("%c %d\n", ch2, ch2);
	printf("%c %d\n", ch3, ch3);
	printf("%c %d\n", ch4, ch4);

	return 0;
}

int p6() {
	int x1, x2, y1, y2;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	printf("area : %d", abs(x1 - x2) * abs(y1 - y2));

	return 0;
}

int p7() {
	int dec, oct, hex;
	scanf("%d %o %x", &dec, &oct, &hex);
	printf("decimal : %d %d %d\n", dec, oct, hex);
	printf("octal : %o %o %o\n", dec, oct, hex);
	printf("hexadecimal : %x %x %x\n", dec, oct, hex);
	printf("Hexadecimal : %X %X %X\n", dec, oct, hex);

	return 0;
}

int p8() {
	int t = 1;
	while (t <= 10) {
		printf("%d\n", t);
		t++;
	}
	printf("\n");
	t = 0;
	while (t++ < 10) {
		printf("%d\n", t);
	}
	printf("\n");
	t = 1;
	do {
		printf("%d\n", t);
	} while (t++ < 10);

	return 0;
}

int p9() {
	int N;
	int t = 1;
	ll sum = 0;
	scanf("%d", &N);
	do {
		sum += t;
	} while (t++ < N);
	printf("%lld", sum);

	return 0;
}

int p10() {
	int n;
	ll sum = 0;
	do {
		scanf("%d", &n);
		sum += n;
	} while (n != 0);
	printf("%lld", sum);

	return 0;
}

int p11() {
	int t = 0;
	while (t++ < 9) {
		printf("%d * %d = %d\n", 2, t, 2 * t);
	}

	return 0;
}

int p12() {
	int N, t = 0;
	scanf("%d", &N);
	while (t++ < 9) {
		printf("%d * %d = %d\n", N, t, N * t);
	}

	return 0;
}



int main() {
	p12();

	return 0;
}