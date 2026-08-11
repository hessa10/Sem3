#include <iostream>
using namespace std;

void merge(int arr[], int left, int middle, int right) {
    int i = left;       
    int j = middle + 1; 
    int k = 0;

    int size = right - left + 1;
    int* temp = new int[size];

    while (i <= middle && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= middle) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= right) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (int x = 0; x < size; x++) {
        arr[left + x] = temp[x];
    }

    delete[] temp;
}

void mergeSort(int arr[], int left, int right) {
    if (left >= right) {
        return; 
    }

    int middle = left + (right - left) / 2;

    mergeSort(arr, left, middle);

    mergeSort(arr, middle + 1, right);

    merge(arr, left, middle, right);
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}
