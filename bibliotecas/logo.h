#define LOGO_H

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <windows.h>   // WinApi header
#include <time.h>

	//==============================================//
	//				CORES DO PAINEL					
	// 1 	(Azul escuro)
	// 2 	(Verde escuro)
	// 3 	(Azul claro)
	// 4 	(Vermelho)
 	// 7 	(Branco cinza)
	// 10 	(Verde claro)
	// 11 	(Ciano)
	// 14 	(Amarelo claro)
	//==============================================//

void funcao_logo() { 
  	HANDLE  hConsole;
  	hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // PEGA O OUTPUT PADRÃO DO CONSOLE
		printf ("__________________________________________________________________________________________\n");

		SetConsoleTextAttribute(hConsole, 11); // DEFINE A ENTRADA/SAIDA E A COLORAÇÃO ESCOLHIDA ( CIANO )

		cout <<"                               _____           _       _    	" << endl;
		cout <<"                              / ____|         (_)     | |   	" << endl;
		cout <<"                             | (___   ___ _ __ _ _ __ | |_  	" << endl;
		cout <<"                              \\___ \\ / __| '__| | '_ \\| __|	" << endl;
		cout <<"                              ____) | (__| |  | | |_) | |_  	" << endl;
		cout <<"                             |_____/ \\___|_|  |_|  __/ \\__|	" << endl;
		cout <<"                                                | |         	" << endl;
		cout <<"                                                |_|         	" << endl;

	SetConsoleTextAttribute(hConsole, 7); // VOLTANDO COLORAÇÃO PARA O PADRÃO ( BRANCO CINZA )                            
	printf ("\n____________________________________ Pedro Bohn Costa ____________________________________\n");
}