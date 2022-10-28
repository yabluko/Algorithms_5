using namespace std;
#include <iostream>
#include "Header.h"


void Merge(int arr[],int left , int mid,int right) {
	int i = left,j=mid+1 ,k = left;
	int temp[20] = {};

	while (i <= mid && j <= right) {
		if (arr[i] <= arr[j]) {
			temp[k] = arr[i];
			i++;
			k++;
		}
		else {
			temp[k] = arr[j];
			j++;
			k++;
		}
	}
	while (i <= mid) {
		temp[k] = arr[i];
		i++;
		k++;
	}
	while (j <= right) {
		temp[k] = arr[j];
		j++;
		k++;
	}
	for (int p = left; p <= right; p++) {
		arr[p] = temp[p];
	}
};


void MergeSort(int arr[], int left, int right) {
	if (left < right) {
		int mid = (left + right) / 2;
		MergeSort(arr, left, mid);
		MergeSort(arr,mid+1, right);
		Merge(arr, left,mid, right);
	}
};

void Input(int arr[], int n) {
	if (n <= 0) {
		cout << "Довжина масиву не може бути від'ємною";
	}
	else 
		for (int i = 0; i < n; i++) {
	cout << "Напишіть значення для елемента - ";
			cin >> arr[i];
		}
};

void Print(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " " << endl;
	}
};
