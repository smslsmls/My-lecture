#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int w = 0 ,d = 0, l = 0;
void win() {
	w++;
	printf("You win!\n");
}
void draw() {
	d++;
	printf("Draw!\n");
}
void lose() {
	l++;
	printf("You lose!\n");
}
int main() {
	int N;
	scanf("%d", &N);
	int a;
	int b;
	srand((unsigned int)time(NULL));
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &a);
		b = rand() % 3 + 1;
		switch (a)
		{
		case 1:
			switch (b)
			{
			case 1:
				draw();
				break;
			case 2:
				lose();
				break;
			case 3:
				win();
				break;
			default:
				break;
			}
			break;
		case 2:
			switch (b)
			{
			case 1:
				win();
				break;
			case 2:
				draw();
				break;
			case 3:
				lose();
				break;
			default:
				break;
			}
			break;
		case 3:
			switch (b)
			{
			case 1:
				lose();
				break;
			case 2:
				win();
				break;
			case 3:
				draw();
				break;
			default:
				break;
			}
			break;
		default:
			break;
		}
	}
	printf("wins : %d\ndraws : %d\nloses : %d", w, d, l);
}