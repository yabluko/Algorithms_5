#include "Header.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_CTYPE, "ukr");

    int n = 0;
    //int arr[20] ;
    cout << "Введіть довжину масиву - ";
    cin >> n ;
    int *arr = new int[n];
    Input(arr,n);
    cout << "Невідсортований масив" << endl;
    Print(arr,n);

    MergeSort(arr,0,n-1);

    cout << "Відсортований масив"<<endl;
    Print(arr, n);

    return 0;
}

