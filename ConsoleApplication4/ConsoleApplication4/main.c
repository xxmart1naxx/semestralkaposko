#include <stdio.h>;
//#include <unistd.h>;
#include <windows.h>;

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

char*** grid[40][10][8];
char** activeBlock[4][4];
int diff;

int main()
{	
	while (1)
	{
		int selection;
		hlavne_menu:
		printf("HLAVNE MENU\n 1.Spustit hru\n 2.Zobrazit skore \n 3.Nastavit obtiaznost\n");
		scanf_s("%d", &selection);
		switch (selection)
		{
		case 3:
			printf("Nastavte rychlost hry (v blokoch za tick)\n");
			scanf_s("%d", &diff);
			goto hlavne_menu;
			break;
		case 2:
			printf("NAJVYSSIE SKORE: \n");
			goto hlavne_menu;
			break;
		case 1:
			break;
		}
	}
}

void hra()
{
	printf("tada");
}
;