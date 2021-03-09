#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef long long ll;

int pm() {
	int n1 = 1;
	printf("n1 = %d", n1);
	n1++;
	printf("n1 = %d", n1++);
	printf("n1 = %d", n1);

	return 0;
}
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
int calculation() {
	ll a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld %lld %lld %.2lf", a + b, a - b, a * b, (double)a / b);
	return 0;
}
int main() {
	calculation();

	return 0;
}