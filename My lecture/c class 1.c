#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
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
	printf("AND ������ ��� : %d\n", num1 & num2);
	printf("OR ������ ��� : %d\n", num1 | num2);
	printf("XOR ������ ��� : %d\n", num1 ^ num2);
	printf("NOT ������ ��� : %d\n", ~num1);
	printf("bit �̵� ���� 1 : %d\n", 1 << 1);
	printf("bit �̵� ���� 2 : %d\n", 1 << 2);
	printf("bit �̵� ���� 3 : %d\n", 1 << 3);
	printf("bit �̵� ���� 4 : %d\n", 1 << 4);
	printf("bit �̵� ���� 14 : %d\n", 1 << 14);
	printf("bit �̵� ������ 1 : %d\n", 2048 >> 1);
	printf("bit �̵� ������ 2 : %d\n", 2048 >> 2);
	printf("bit �̵� ������ 3 : %d\n", 2048 >> 3);
	printf("bit �̵� ������ 4 : %d\n", 2048 >> 4);
	printf("bit �̵� ������ 14 : %d\n", 2048 >> 14);
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



int main() {
	p3();

	return 0;
}