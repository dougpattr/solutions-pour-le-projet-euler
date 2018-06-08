// stdafx.h : arquivo de inclusão para inclusões do sistema padrões,
// ou inclusões específicas de projeto que são utilizadas frequentemente, mas
// são modificadas raramente
//

#pragma once

int repeat();
long int primo(int p);

#include "targetver.h"
#include "qodlr.h"

#include <stdio.h>
#include <tchar.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <locale>
#include <math.h>
#include <locale>

int repeat() {
	int rep;
	do {
		rep = getchar();
		rep = toupper(rep);
	} while ((rep != 'S') && (rep != 'N'));
	if (rep == 'S') {
		system("cls");
		return 1;
	}
	else return 0;
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

// TODO: adicionar referências de cabeçalhos adicionais que seu programa necessita