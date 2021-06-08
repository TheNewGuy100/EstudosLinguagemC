#include "functions.h"

int QuickSortController(int arrMAX[], int arrMED[], int arrMIN[], int arrLESS[], int sizeMAX, int sizeMED, int sizeMIN, int sizeLESS) {
    cout << "\n|\n| ====================== INICIO DAS COMPARACOES QUICK SORT ======================\n|";
    QuickSortTime(arrMAX, sizeMAX, "aleatorio -> ");
    QuickSortTime(arrMED, sizeMED, "ordenados -> ");
    QuickSortTime(arrMIN, sizeMIN, "inversamente ordenados -> ");
    QuickSortTime(arrLESS, sizeLESS, "quase ordenados -> ");
}

int BubbleSortController(int arrMAX[], int arrMED[], int arrMIN[], int arrLESS[], int sizeMAX, int sizeMED, int sizeMIN, int sizeLESS) {
    cout << "\n|\n| ====================== INICIO DAS COMPARACOES BUBBLE SORT ======================\n|";
    BubbleSortTime(arrMAX, sizeMAX, "aleatorio -> ");
    BubbleSortTime(arrMED, sizeMED, "ordenados -> ");
    BubbleSortTime(arrMIN, sizeMIN, "inversamente ordenados -> ");
    BubbleSortTime(arrLESS, sizeLESS, "quase ordenados -> ");
}

int HeapSortController(int arrMAX[], int arrMED[], int arrMIN[], int arrLESS[], int sizeMAX, int sizeMED, int sizeMIN, int sizeLESS) {
    cout << "\n|\n| ====================== INICIO DAS COMPARACOES HEAP SORT ======================\n|";
    HeapSortTime(arrMAX, sizeMAX, "aleatorio -> ");
    HeapSortTime(arrMED, sizeMED, "ordenados -> ");
    HeapSortTime(arrMIN, sizeMIN, "inversamente ordenados -> ");
    HeapSortTime(arrLESS, sizeLESS, "quase ordenados -> ");
}

int InsertionSortController(int arrMAX[], int arrMED[], int arrMIN[], int arrLESS[], int sizeMAX, int sizeMED, int sizeMIN, int sizeLESS) {
    cout << "\n|\n| ====================== INICIO DAS COMPARACOES INSERTION SORT ======================\n|";
    InsertionSortTime(arrMAX, sizeMAX, "aleatorio -> ");
    InsertionSortTime(arrMED, sizeMED, "ordenados -> ");
    InsertionSortTime(arrMIN, sizeMIN, "inversamente ordenados -> ");
    InsertionSortTime(arrLESS, sizeLESS, "quase ordenados -> ");
}

int MergeSortController(int arrMAX[], int arrMED[], int arrMIN[], int arrLESS[], int sizeMAX, int sizeMED, int sizeMIN, int sizeLESS) {
    cout << "\n|\n| ====================== INICIO DAS COMPARACOES MERGE SORT ======================\n|";
    MergeSortTime(arrMAX, sizeMAX, "aleatorio -> ");
    MergeSortTime(arrMED, sizeMED, "ordenados -> ");
    MergeSortTime(arrMIN, sizeMIN, "inversamente ordenados -> ");
    MergeSortTime(arrLESS, sizeLESS, "quase ordenados -> ");
}

int SelectionSortController(int arrMAX[], int arrMED[], int arrMIN[], int arrLESS[], int sizeMAX, int sizeMED, int sizeMIN, int sizeLESS) {
    cout << "\n|\n| ====================== INICIO DAS COMPARACOES SELECTION SORT ======================\n|";
    SelectionSortTime(arrMAX, sizeMAX, "aleatorio -> ");
    SelectionSortTime(arrMED, sizeMED, "ordenados -> ");
    SelectionSortTime(arrMIN, sizeMIN, "inversamente ordenados -> ");
    SelectionSortTime(arrLESS, sizeLESS, "quase ordenados -> ");
}

