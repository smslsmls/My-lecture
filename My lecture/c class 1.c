#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#include<conio.h>
#define ADD(a,b,result) result=(a)+(b);

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
//for repeat2
int repeat2() {
	printf("====================\n");
	for (int j = 2; j < 10; j++)
	{
		for (int i = 1; i < 10; i++)
		{
			printf("%d * %d = %d\n", j, i, j * i);
		}
		printf("====================\n");
	}

	return 0;
}
//absolute
int absolute() {
	int n, abs1, abs2, abs3;
	scanf("%d", &n);
	if (n < 0)
		abs1 = n * -1;
	printf("%d\n", abs1);
	abs2 = (n < 0) ? n * -1 : n;
	printf("%d\n", abs2);
	abs3 = abs(n);
	printf("%d\n", abs3);
	return 0;
}
//continue, break
int repeat3() {
	int sum = 0, num = 0;
	while (num < 100)
	{
		num++;
		if (num % 2 == 1)
			continue;
		printf("%d\n", num);
	}
	return 0;
}
//switch case break
int switchcase() {
	int n;
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		printf("1");
		break;
	case 2:
		printf("2");
		break;
	case 3:
		printf("3");
		break;
	case 4:
		printf("4");
		break;
	case 5:
		printf("5");
		break;
	default:
		break;
	}
	return 0;
}
//switch case 2
int switchcase2() {
	int n;
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		printf("작은주먹");
		break;
	case 2:
		printf("큰주먹");
		break;
	case 3:
		printf("오른발");
		break;
	case 4:
		printf("왼발");
		break;
	default:
		printf("*승룡권*");
		break;
	}
	return 0;
}
//function
int func() {
	int n1, n2, n3;
	n1 = printf("I love you\n");
	printf("n1 = %d\n", n1);
	n2 = printf("난 널 사랑해\n");
	printf("n2 = %d\n", n2);
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

	return 0;
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

int p13() {
	int n1 = 1, n2;
	while (n1++ < 9) {
		n2 = 0;
		while (n2++ < 9)
			printf("%d * %d = %d\n", n1, n2, n1 * n2);
		printf("\n");
	}

	return 0;
}

int p14() {
	for (int i = 9; i > 1; i--)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}

int p15() {
	for (int i = 9; i < 81; i++)
	{
		printf("%d * %d = %d\n", i / 9 + 1, i % 9 + 1, (i / 9 + 1) * (i % 9 + 1));
	}

	return 0;
}

int p16() {
	int a, b;
	int sum = 0, mul = 1;
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++)
	{
		sum += i;
		mul *= i;
	}
	printf("%d %d", sum, mul);

	return 0;
}
//*****
//*****
//*****
//*****
//*****
int p17() {
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
//*****
//****
//***
//**
//*
int p18() {
	int N;
	scanf("%d", &N);
	for (int i = N - 1; i >= 0; i--)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
//*****
// ****
//  ***
//   **
//    *
int p19() {
	int N;
	scanf("%d", &N);
	for (int i = N; i > 0; i--)
	{
		for (int j = i; j < N; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
//  *  
// *** 
//*****
int p20() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		for (int j = 1; j <= N * 2 - 1; j++)
		{
			if (N - i <= j && N + i >= j) {
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}
//  *  
// *** 
//*****
// *** 
//  *  
int p21() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N * 2 - 1; i++)
	{
		for (int j = 1; j <= N * 2 - 1; j++)
		{
			if (N > i) {
				if (N - i <= j && N + i >= j) {
					printf("*");
				}
				else
					printf(" ");
			}
			else {
				if (i - N + 2 <= j && N * 3 - i - 2 >= j) {
					printf("*");
				}
				else
					printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}

int p22() {
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%4d", i);
		if (i % 15 == 0)
			printf("\n");
	}
	return 0;
}

int p23() {
	int n = 1;
	for (int i = 1; i < 101; i++)
	{
		if (i % 5 == 0 || i % 7 == 0) {
			printf("%d ", i);
			n++;
		}
		if (n % 6 == 0) {
			printf("\n");
			n = 1;
		}
	}
	return 0;
}

int p24() {
	int kor, mat, pro;
	scanf("%d %d %d", &kor, &mat, &pro);
	double avg = (kor + mat + pro) / 3.0;
	if (avg >= 90.0)
		printf("A");
	else if (avg >= 80.0)
		printf("B");
	else if (avg >= 70.0)
		printf("C");
	else if (avg >= 60.0)
		printf("D");
	else
		printf("F");

	return 0;
}

int p25() {
	int n = 0, sum = 0;
	while (1) {
		sum += ++n;
		if (sum > 100000)
			break;
	}
	printf("%d %d", n, sum);
	return 0;
}

int p26() {
	int n = 0;
	int sum = 0;
	while (1) {
		sum += ++n;
		printf("%d\n", sum);
		if (sum > 50000) {
			sum -= n--;
			break;
		}
	}
	printf("%d %d", n, sum);
	return 0;
}

int p27() {
	int n = 0;
	while (n++ < 50) {
		if (n % 2 == 0 || n % 3 == 0)
			continue;
		printf("%d\n", n);
	}
	return 0;
}

int p28() {
	for (int i = 2; i <= 9; i++)
	{
		if (i % 2 == 1)
			continue;
		for (int j = 1; j <= i; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}

int p29() {
	int i = 1, j;
	while (i <= 9) {
		i++;
		j = 0;
		while (j <= 9) {
			j++;
			if (j > i)
				break;
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
	return 0;
}

int p30() {
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			for (int k = 3 * (i - 1) + 1; k <= 3 * i; k++)
			{
				printf("%d * %d = %d	", k, j, k * j);
			}
			printf("\n");
		}
		printf("\n\n");
	}
	return 0;
}

int p31() {
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i*10+j+j*10+i==99)
				printf("%d %d\n", i, j);
		}
	}
	return 0;
}

int p32() {
	char dir;
	scanf("%c", &dir);
	switch (dir)
	{
	case 'w':
		printf("move up");
		break;
	case 'a':
		printf("move left");
		break;
	case 's':
		printf("move down");
		break;
	case 'd':
		printf("move right");
		break;
	default:
		printf("incollect direction");
		break;
	}
	return 0;
}

int p33() {
	int inp;
	while (1) {
		if (_kbhit()) {
			inp = _getch();
			switch (inp)
			{
			case 'w':
				printf("move up\n");
				break;
			case 'a':
				printf("move left\n");
				break;
			case 's':
				printf("move down\n");
				break;
			case 'd':
				printf("move right\n");
				break;
			default:
				printf("incollect direction\n");
				break;
			}
		}
	}
	return 0;
}

int p34() {
	char str;
	scanf("%c", &str);
	switch (str)
	{
	case 'M':
	case 'm':
		printf("Good Morning");
		break;
	case 'A':
	case 'a':
		printf("Good Afternoon");
		break;
	case 'E':
	case 'e':
		printf("Good Evening");
		break;
	default:
		printf("incollect choice");
		break;
	}
	return 0;
}

int p35() {
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				if (i * 101 + j * 20 + k * 101 == 1232)
					printf("%d %d %d\n", i, j, k);
			}
		}
	}
	return 0;
}

int p36_add(int a, int b) {
	return a + b;
}
int p36_sub(int a, int b) {
	return a - b;
}
int p36_mul(int a, int b) {
	return a * b;
}
double p36_div(int a, int b) {
	if (b == 0)
		return 0;
	return (double)a / (double)b;
}

int p36() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("add : %d\nsub : %d\nmul : %d\ndiv : %f\n", p36_add(a, b), p36_sub(a, b), p36_mul(a, b), p36_div(a, b));
	return 0;
}

int p37_tmax(int a,int b,int c) {
	int t = (a > b) ? a : b;
	return (t > c) ? t : c;
}
int p37_tmin(int a,int b,int c) {
	int t = (a < b) ? a : b;
	return (t < c) ? t : c;
}
int p37() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d %d", p37_tmax(a, b, c), p37_tmin(a, b, c));
	return 0;
}

int p38() {
	double a;
	scanf("%lf", &a);
	printf("sin : %lf\ncos : %lf\ntan : %lf", sin(a), cos(a), tan(a));
	return 0;
}



int main() {
	p38();

	return 0;
}