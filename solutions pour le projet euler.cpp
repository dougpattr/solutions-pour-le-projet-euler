// solutions pour le projet euler.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"

int main() {
	setlocale(LC_ALL, "");
	int option;
	do {
		do {
			printf("DIGITE O NÚMERO DO PROBLEMA: ");
			scanf("%d", &option);
			if (option <= 0) {
				printf(SPACE);
				printf(ERROR);
				_getch();
				_getch();
				system("cls");
			}
		} while (option <= 0);
		switch (option) {
		case 1: {
			system("cls");
			printf(PROBLEM001);
			printf(SPACE);
			int i = 1, lim = 1000, somme = 0;
			while (i < lim) {
				if (i % 3 == 0 || i % 5 == 0) {
					somme += i;
				}
				i++;
			}
			printf("%d", somme);
			_getch();
			_getch();
			break;
		}
		}
		printf(SPACE);
		printf("QUER REPETIR? (S/N): ");
	} while (repeat());
    return 0;
}