#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int arr2[], int n1, int n2);

int main()
{
    int arr1[] = {1, 3, 5, 7, 9};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8, 10};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // int arr3[n1+n2];
    mergeArrays(arr1, arr2, n1, n2);
    cout << endl;
}

void mergeArrays(int arr1[], int arr2[], int num1, int num2)
{
    int i = 0, j = 0, k = 0;
    int arr3[num1 + num2];
    while (i < num1 && j < num2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++, i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++, j++;
        }
    }
    // Store remaining elements of first array
    while (i < num1)
    {
        arr3[k] = arr1[i];
        k++, i++;
    }
    // Store remaining elements of second array
    while (j < num2)
    {
        arr3[k] = arr2[j];
        k++, j++;
    }
    for (int i = 0; i < num1 + num2; i++)
    {
        cout << arr3[i] << " ";
    }
}