#include "array.h"

template <class T>
array<T>::array()
{
    lb = 1;
    ub = 0;
}

template <class T>
void array<T>::setLB(int x) { lb = x; }

template <class T>
void array<T>::setUB(int x) { ub = x; }

template <class T>
void array<T>::create()
{
    cout << "Enter " << (ub - lb + 1) << " elements: ";
    for (int i = lb; i <= ub; i++)
        cin >> a[i];
}

template <class T>
void array<T>::display()
{
    for (int i = lb; i <= ub; i++)
        cout << a[i] << " ";
    cout << endl;
}
template <class T>
void array<T>::bubbleSort()
{
    for (int i = lb; i < ub; i++)
    {
        for (int j = lb; j <= ub - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                T temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
template <class T>
void array<T>::insertionSort()
{
    for (int i = lb + 1; i <= ub; i++)
    {
        T key = a[i];
        int j = i - 1;
        while (j >= lb && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}
template <class T>
void array<T>::selectionSort()
{
    for (int i = lb; i < ub; i++)
    {
        int min = i;
        for (int j = i + 1; j <= ub; j++)
        {
            if (a[j] < a[min])
                minIdx = j;
        }
        T temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}
template <class T>
void array<T>::merge(int low, int mid, int high)
{
    T temp[100];
    int i = low, j = mid + 1, k = low;
}