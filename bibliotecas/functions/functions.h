#include "../sort/bubbleSort.h"
#include "../sort/heapSort.h"
#include "../sort/insertionSort.h"
#include "../sort/mergeSort.h"
#include "../sort/quickSort.h"
#include "../sort/selectionSort.h"


//////////////////////////////////// QUICK SORT //////////////////////////////////
auto QuickSortTime(int array[], int size, string label) {

    cout << "\n| Processando " << "0%";
    auto t1 = high_resolution_clock::now();
    cout << "\r| Processando " << "25%";
        quickSort(array, 0, size - 1);
    auto t2 = high_resolution_clock::now();
    cout << "\r| Processando " << "75%";

    auto ms_int = duration_cast<microseconds>(t2 - t1);

    cout << "\r| Tempo de execucao para " << size << " elementos em estilo " << label << ms_int.count() <<  " microseconds";
    
    return ms_int;
}

//////////////////////////////////// BUBBLE SORT //////////////////////////////////
auto BubbleSortTime(int array[], int size, string label) {
    cout << "\n| Processando " << "0%";

    auto t1 = high_resolution_clock::now();
    cout << "\r| Processando " << "25%";
        bubbleSort(array, size - 1);
    auto t2 = high_resolution_clock::now();
    cout << "\r| Processando " << "75%";

    auto ms_int = duration_cast<microseconds>(t2 - t1);

    cout << "\r| Tempo de execucao para " << size << " elementos em estilo " << label << ms_int.count() <<  " microseconds";
    
    return ms_int;
}

//////////////////////////////////// HEAP SORT ////////////////////////////////////
auto HeapSortTime(int array[], int size, string label) {
    cout << "\n| Processando " << "0%";

    auto t1 = high_resolution_clock::now();
    cout << "\r| Processando " << "25%";
        heapSort(array, size - 1);
    auto t2 = high_resolution_clock::now();
    cout << "\r| Processando " << "75%";

    auto ms_int = duration_cast<microseconds>(t2 - t1);

    cout << "\r| Tempo de execucao para " << size << " elementos em estilo " << label << ms_int.count() <<  " microseconds";
    
    return ms_int;
}

//////////////////////////////////// INSERTION SORT ///////////////////////////////
auto InsertionSortTime(int array[], int size, string label) {
    cout << "\n| Processando " << "0%";

    auto t1 = high_resolution_clock::now();
    cout << "\r| Processando " << "25%";
        insertionSort(array, size - 1);
    auto t2 = high_resolution_clock::now();
    cout << "\r| Processando " << "75%";

    auto ms_int = duration_cast<microseconds>(t2 - t1);

    cout << "\r| Tempo de execucao para " << size << " elementos em estilo " << label << ms_int.count() <<  " microseconds";
    
    return ms_int;
}

//////////////////////////////////// MERGE SORT ///////////////////////////////////
auto MergeSortTime(int array[], int size, string label) {
    cout << "\n| Processando " << "0%";

    auto t1 = high_resolution_clock::now();
    cout << "\r| Processando " << "25%";
        mergeSort(array, 0, size - 1);
    auto t2 = high_resolution_clock::now();
    cout << "\r| Processando " << "75%";

    auto ms_int = duration_cast<microseconds>(t2 - t1);

    cout << "\r| Tempo de execucao para " << size << " elementos em estilo " << label << ms_int.count() <<  " microseconds";
    
    return ms_int;
}

//////////////////////////////////// SELECTION SORT ///////////////////////////////////
auto SelectionSortTime(int array[], int size, string label) {
    cout << "\n| Processando " << "0%";

    auto t1 = high_resolution_clock::now();
    cout << "\r| Processando " << "25%";
        selectionSort(array, size - 1);
    auto t2 = high_resolution_clock::now();
    cout << "\r| Processando " << "75%";

    auto ms_int = duration_cast<microseconds>(t2 - t1);

    cout << "\r| Tempo de execucao para " << size << " elementos em estilo " << label << ms_int.count() <<  " microseconds";
    
    return ms_int;
}