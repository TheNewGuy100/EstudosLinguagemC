// C++ Librarys
    #include <stdlib.h>
    #include <stdio.h>
    #include <iostream>
    #include <windows.h>   // WinApi header
    #include <time.h>
    #include <string>
    #include <sstream>
    #include <thread>
    #include <chrono>

// std::cout, std::cin
    using namespace std;
    using namespace std::chrono_literals;
    using std::chrono::high_resolution_clock;
    using std::chrono::duration_cast;
    using std::chrono::duration;
    using std::chrono::microseconds;
    using std::array;

    #define MAX 100000
    #define MED 10000
    #define MIN 1000
    #define LESS 100

//  pega os arquivos do diretório local
    #include "bibliotecas/pilha.h"
    #include "bibliotecas/logo.h"
    #include "Bibliotecas/fila.h"
    #include "bibliotecas/lista.c"
    #include "bibliotecas/functions/functionsController.h"
    #include "bibliotecas/globalUnit/GlobalVariables.h"

void systemMessage() {
    cout << "\n|\n| Bem-vindo, escolha a opcao que deseja proseguir:";
    cout << "\n|";
    cout << "\n| [2] -> detalhes sobre os arrays utilizados, e como foram feitos";
    cout << "\n| [1] -> verificar todas as operacoes e seus tempos com tabelas programadas";
    cout << "\n| [0] -> sair do projeto\n| ";
    cout << "\n| ";
}

int main() {

	// LOGO
	funcao_logo();

    // SEMENTE ALEATÓRIA
    srand(time(NULL));

	// MAIN
    int arrmax[MAX], arrmed[MED], arrmin[MIN], arrless[LESS], response;

    int sizemax = sizeof(arrmax)/sizeof(arrmax[0]);
    int sizemed = sizeof(arrmed)/sizeof(arrmed[0]);
    int sizemin = sizeof(arrmin)/sizeof(arrmin[0]);
    int sizeless = sizeof(arrless)/sizeof(arrless[0]);
    int helper = sizemin, TenHelper = 0;

    cout << "\n| ORGANIZANDO TODAS AS VARIAVEIS PARA OS PROCESSOS, AGUARDE...\n|";


    for (int i = 0; i < MAX ; i++) {
        
        // ALEATÓRIO
        arrmax[i] = rand() % MAX;

        // ORDENADOS
        if (i < sizemed) {
            arrmed[i] = i;
        }

        // INVERSAMENTE ORDENADOS
        if (i < sizemin) {
            helper = helper--;
            arrmin[i] = helper;
        }

        // QUASE ORDENADOS
        if (i < sizeless) {
            if ((i + 1)%10 == 0) {
                arrless[i] = rand() % LESS;
            } else {
                arrless[i] = i;
            }

        }

        // AJUSTE FINAL DA PORCENTAGEM
        if ( i == MAX - 1) {
            i++;
        }

        cout << "\r| Trabalhando na randomizacao: " << i/1000 << " / 100 %", i;
    }

    do {
        systemMessage();
        cin >> response;
            switch (response) {
                case 2:
                    system("cls");
                    cout << "\n| DETALHES SOBRE ARRAYS UTILIZADOS:";
                    cout << "\n| ";
                    cout << "\n| ARRAY ALEATORIO ->  Utlizado rand com srand(time(NULL), gerando 100.000 numeros aleatorios com ele";
                    cout << "\n| ARRAY ORDENADO -> Utiliza a numeracao de i em (int i = 0; i < MAX ; i++) para ser gerado";
                    cout << "\n| ARRAY INVERSAMENTE ORDENADOS -> Utiliza o tamanho do array escolhido e o 'i' para ordenar inversamente";
                    cout << "\n| ARRAY QUASE ORDENADOS -> Utiliza um metodo para a cada 1 casa decimal, gerar um numero aleatorio";
                    cout << "\n|";
                    cout << "\n| ";

                    system("pause");
                    system("cls");
                break;
                
                case 1:
                    system("cls");
                    QuickSortController(arrmax, arrmed, arrmin, arrless, sizemax, sizemed, sizemin, sizeless);
                    BubbleSortController(arrmax, arrmed, arrmin, arrless, sizemax, sizemed, sizemin, sizeless);
                    HeapSortController(arrmax, arrmed, arrmin, arrless, sizemax, sizemed, sizemin, sizeless);
                    InsertionSortController(arrmax, arrmed, arrmin, arrless, sizemax, sizemed, sizemin, sizeless);
                    MergeSortController(arrmax, arrmed, arrmin, arrless, sizemax, sizemed, sizemin, sizeless);
                    SelectionSortController(arrmax, arrmed, arrmin, arrless, sizemax, sizemed, sizemin, sizeless);
                    
                    cout << "\n|\n| RESULTADOS A MOSTRA \n| ";
                    system("pause");
                    system("cls");
                break;
                
                default:
                    system("cls");
                    if (response != 0) {
                        cout << "| ESCOLHA UMA OPCAO VALIDA OU SAIA UTILIZANDO A TECLA NUMERICA 0";
                    }
                break;

            }
    } while ( response != 0);

    cout << "\n";
    system("pause");
    return 200;
}