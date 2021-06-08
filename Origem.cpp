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
    #include "bibliotecas/sort/bubbleSort.h"
    #include "bibliotecas/sort/selectionSort.h"
    #include "bibliotecas/sort/heapSort.h"
    #include "bibliotecas/sort/mergeSort.h"
    #include "bibliotecas/sort/insertionSort.h"
    #include "bibliotecas/sort/quickSort.h"


//////////////////////////////////// QUICK SORT //////////////////////////////////
void QuickSortTime(int array[], int size, string label) {

    auto t1 = high_resolution_clock::now();
        quickSort(array, 0, size - 1);
    auto t2 = high_resolution_clock::now();

    auto ms_int = duration_cast<microseconds>(t2 - t1);

    cout << "\n| Tempo de execucao para " << size << " elementos em estilo " << label << ms_int.count() <<  " microseconds";
    
}

//////////////////////////////////// BUBBLE SORT //////////////////////////////////
void BubbleSortTime(int array[], int size, string label) {

    auto t1 = high_resolution_clock::now();
        bubbleSort(array, size - 1);
    auto t2 = high_resolution_clock::now();

    auto ms_int = duration_cast<microseconds>(t2 - t1);

    cout << "\n| Tempo de execucao para " << size << " elementos em estilo " << label << ms_int.count() <<  " microseconds";
    
}




int main() {

	// LOGO
	funcao_logo();

    // SEMENTE ALEATÓRIA
    srand(time(NULL));

	// MAIN
    int arrmax[MAX], arrmed[MED], arrmin[MIN], arrless[LESS];
    
    int sizemax = sizeof(arrmax)/sizeof(arrmax[0]);
    int sizemed = sizeof(arrmed)/sizeof(arrmed[0]);
    int sizemin = sizeof(arrmin)/sizeof(arrmin[0]);
    int sizeless = sizeof(arrless)/sizeof(arrless[0]);

    int helper = sizemin, TenHelper = 0;
    
    cout << "\n| ORGANIZANDO 100000 VARIAVEIS PARA O PROCESSO\n|";
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

    cout << "\n|\n| ====================== INICIO DAS COMPARACOES QUICK SORT ======================\n|";
    QuickSortTime(arrmax, sizemax, "aleatorio -> ");
    QuickSortTime(arrmed, sizemed, "ordenados -> ");
    QuickSortTime(arrmin, sizemin, "inversamente ordenados -> ");
    QuickSortTime(arrless, sizeless, "quase ordenados -> ");



 









//////////////////////////////////// HEAP SORT ////////////////////////////////////







//////////////////////////////////// INSERTION SORT ///////////////////////////////




//////////////////////////////////// MERGE SORT ///////////////////////////////////




       
//////////////////////////////////// SELECTION SORT ///////////////////////////////////






















    system("pause");
    return 200;
}