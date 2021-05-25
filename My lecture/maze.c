#include<stdio.h>
#include<windows.h>

int m[9][9] = {
	{2,2,2,2,2,2,2,2,2},
	{2,0,0,0,0,0,0,0,2},
	{2,0,2,2,0,2,2,0,2},
	{2,0,2,0,0,2,0,0,2},
	{2,0,2,0,2,0,2,0,2},
	{2,0,0,0,0,0,2,0,2},
	{2,0,2,2,2,0,2,2,2},
	{2,0,0,0,0,0,0,0,2},
	{2,2,2,2,2,2,2,2,2} };
int Si, Sj, Ei, Ej, succes, top, ri[100], rj[100];
int X[4] = { 1,0,-1,0 };
int Y[4] = { 0,1,0,-1 };
int visit(int, int);
void print(int, int);
void CursorView();
void gotoxy(int, int);
int main() {
	top = 0;
	succes = 0;
	printf("=== find maze path game ===\n");
	Si = 1; Sj = 1;
	Ei = 7; Ej = 7;
	CursorView();
	visit(Si, Sj);
	gotoxy(0, 10);
	return 0;
}
void gotoxy(int x, int y) {
	COORD xy = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), xy);
}
void CursorView()
{
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1;
	cursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}
void print(int i, int j) {
	gotoxy(0, 1);
	for (int k = 0; k < 9; k++)
	{
		for (int l = 0; l < 9; l++)
		{
			if (m[k][l] == 2)
				printf("¡á");
			else if (m[k][l] == 0)
				printf("  ");
			else
				printf("¢Ã");
		}
		printf("\n");
	}
	gotoxy(j * 2, i + 1);
	printf("¡Ú");
	_sleep(500);
}
int visit(int i, int j) {
	print(i, j);
	if (succes)
		return 1;
	static int path = 1;
	m[i][j] = 1;
	ri[top] = i; rj[top] = j;
	top++;
	if (i == Ei && j == Ej) {
		succes = 1;
	}
	for (int k = 0; k < 4; k++) {
		if (succes)
			break;
		if (m[i + Y[k]][j + X[k]] == 0) {
			visit(i + Y[k], j + X[k]);
			if (succes)
				break;
			print(i, j);
		}
	}
	if (!succes) {
		top--;
		m[i][j] = 0;
	}
	gotoxy(0, 10);
	return succes;
}