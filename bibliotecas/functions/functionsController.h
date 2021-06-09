#include "functions.h"
#include "../globalUnit/GlobalVariables.h"

int QuickSortController(int arrMAX[], int arrMED[], int arrMIN[], int arrLESS[], int sizeMAX, int sizeMED, int sizeMIN, int sizeLESS) {
    cout << "\n|\n| ====================== INICIO DAS COMPARACOES QUICK SORT ======================\n|";
        zerar();
    QuickSortTime(arrMAX, sizeMAX, "aleatorio -> ");
        cout << "\n| Comparacoes feitas: " << comp;
        cout << "\n| Trocas feitas: " << troc << "\n|";
        zerar();
    QuickSortTime(arrMED, sizeMED, "ordenados -> ");
        cout << "\n| Comparacoes feitas: " << comp;
        cout << "\n| Trocas feitas: " << troc << "\n|";
        zerar();
    QuickSortTime(arrMIN, sizeMIN, "inversamente ordenados -> ");
        cout << "\n| Comparacoes feitas: " << comp;
        cout << "\n| Trocas feitas: " << troc << "\n|";
        zerar();
    QuickSortTime(arrLESS, sizeLESS, "quase ordenados -> ");
        cout << "\n| Comparacoes feitas: " << comp;
        cout << "\n| Trocas feitas: " << troc << "\n|";
}

int BubbleSortController(int arrMAX[], int arrMED[], int arrMIN[], int arrLESS[], int sizeMAX, int sizeMED, int sizeMIN, int sizeLESS) {
    cout << "\n|\n| ====================== INICIO DAS COMPARACOES BUBBLE SORT ======================\n|";
        zerar();
    BubbleSortTime(arrMAX, sizeMAX, "aleatorio -> ");
        cout << "\n| Comparacoes feitas: " << comp;
        cout << "\n| Trocas feitas: " << troc << "\n|";
        zerar();
    BubbleSortTime(arrMED, sizeMED, "ordenados -> ");
        cout << "\n| Comparacoes feitas: " << comp;
        cout << "\n| Trocas feitas: " << troc << "\n|";
        zerar();
    BubbleSortTime(arrMIN, sizeMIN, "inversamente ordenados -> ");
        cout << "\n| Comparacoes feitas: " << comp;
        cout << "\n| Trocas feitas: " << troc << "\n|";
        zerar();
    BubbleSortTime(arrLESS, sizeLESS, "quase ordenados -> ");
        cout << "\n| Comparacoes feitas: " << comp;
        cout << "\n| Trocas feitas: " << troc << "\n|";
}

int HeapSortController(int arrMAX[], int arrMED[], int arrMIN[], int arrLESS[], int sizeMAX, int sizeMED, int sizeMIN, int sizeLESS) {
    cout << "\n|\n| ====================== INICIO DAS COMPARACOES HEAP SORT ======================\n|";
        zerar();
    HeapSortTime(arrMAX, sizeMAX, "aleatorio -> ");
        cout << "\n| Comparacoes feitas: " << comp;
        cout << "\n| Trocas feitas: " << troc << "\n|";
        zerar();
    HeapSortTime(arrMED, sizeMED, "ordenados -> ");
        cout << "\n| Comparacoes feitas: " << comp;
        cout << "\n| Trocas feitas: " << troc << "\n|";
        zerar();
    HeapSortTime(arrMIN, sizeMIN, "inversamente ordenados -> ");
        cout << "\n| Comparacoes feitas: " << comp;
        cout << "\n| Trocas feitas: " << troc << "\n|";
        zerar();
    HeapSortTime(arrLESS, sizeLESS, "quase ordenados -> ");
        cout << "\n| Comparacoes feitas: " << comp;
        cout << "\n| Trocas feitas: " << troc << "\n|";
}

int InsertionSortController(int arrMAX[], int arrMED[], int arrMIN[], int arrLESS[], int sizeMAX, int sizeMED, int sizeMIN, int sizeLESS) {
    cout << "\n|\n| ====================== INICIO DAS COMPARACOES INSERTION SORT ======================\n|";
        zerar();
    InsertionSortTime(arrMAX, sizeMAX, "aleatorio -> ");
        cout << "\n| Comparacoes feitas: " << comp;
        cout << "\n| Trocas feitas: " << troc << "\n|";
        zerar();
    InsertionSortTime(arrMED, sizeMED, "ordenados -> ");
        cout << "\n| Comparacoes feitas: " << comp;
        cout << "\n| Trocas feitas: " << troc << "\n|";
        zerar();
    InsertionSortTime(arrMIN, sizeMIN, "inversamente ordenados -> ");
        cout << "\n| Comparacoes feitas: " << comp;
        cout << "\n| Trocas feitas: " << troc << "\n|";
        zerar();
    InsertionSortTime(arrLESS, sizeLESS, "quase ordenados -> ");
        cout << "\n| Comparacoes feitas: " << comp;
        cout << "\n| Trocas feitas: " << troc << "\n|";
}

int MergeSortController(int arrMAX[], int arrMED[], int arrMIN[], int arrLESS[], int sizeMAX, int sizeMED, int sizeMIN, int sizeLESS) {
    cout << "\n|\n| ====================== INICIO DAS COMPARACOES MERGE SORT ======================\n|";
        zerar();
    MergeSortTime(arrMAX, sizeMAX, "aleatorio -> ");
        cout << "\n| Comparacoes feitas: " << comp;
        cout << "\n| Trocas feitas: " << troc << "\n|";
        zerar();
    MergeSortTime(arrMED, sizeMED, "ordenados -> ");
        cout << "\n| Comparacoes feitas: " << comp;
        cout << "\n| Trocas feitas: " << troc << "\n|";
        zerar();
    MergeSortTime(arrMIN, sizeMIN, "inversamente ordenados -> ");
        cout << "\n| Comparacoes feitas: " << comp;
        cout << "\n| Trocas feitas: " << troc << "\n|";
        zerar();
    MergeSortTime(arrLESS, sizeLESS, "quase ordenados -> ");
        cout << "\n| Comparacoes feitas: " << comp;
        cout << "\n| Trocas feitas: " << troc << "\n|";

}

int SelectionSortController(int arrMAX[], int arrMED[], int arrMIN[], int arrLESS[], int sizeMAX, int sizeMED, int sizeMIN, int sizeLESS) {
    cout << "\n|\n| ====================== INICIO DAS COMPARACOES SELECTION SORT ======================\n|";
        zerar();
    SelectionSortTime(arrMAX, sizeMAX, "aleatorio -> ");
        cout << "\n| Comparacoes feitas: " << comp;
        cout << "\n| Trocas feitas: " << troc << "\n|";
        zerar();
    SelectionSortTime(arrMED, sizeMED, "ordenados -> ");
        cout << "\n| Comparacoes feitas: " << comp;
        cout << "\n| Trocas feitas: " << troc << "\n|";
        zerar();
    SelectionSortTime(arrMIN, sizeMIN, "inversamente ordenados -> ");
        cout << "\n| Comparacoes feitas: " << comp;
        cout << "\n| Trocas feitas: " << troc << "\n|";
        zerar();
    SelectionSortTime(arrLESS, sizeLESS, "quase ordenados -> ");
        cout << "\n| Comparacoes feitas: " << comp;
        cout << "\n| Trocas feitas: " << troc << "\n|";
}

