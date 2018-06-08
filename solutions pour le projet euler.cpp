// solutions pour le projet euler.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"

int repeat();

int main() {
	setlocale(LC_ALL, "");
	do {
		int option;
		printf("DIGITE O NÚMERO DO PROBLEMA: ");
		scanf("%d", &option);
		switch (option) {
		case 1: {
			break;
		}
		}
		printf("\n\nDESEJA REPETIR O CÓDIGO? (S/N): ");
	} while (repeat());
    return 0;
}

int repeat() {
	int rep;
	do {
		rep = getchar();
		rep = toupper(rep);
	} while (rep != 'S' != 'N');
	if (rep == 'S') {
		system("cls");
		return 1;
	}
	else {
		printf("\n\nMADE BY THE GOD DOUG");
		return 0;
	}
}

long int primo(int p) {
	int i = 3, exp = (int)sqrt((double)p) + 1;
	if (p == 2) return 1;
	if (p % 2 == 0) return 0;
	for (; i <= exp; i += 2)
		if (p%i == 0) return 0;
	if (p < 2) return 0;
	return 1;
}