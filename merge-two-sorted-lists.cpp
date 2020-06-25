#include <iostream>
using namespace std;

void Merge(int array1[], int array2[], int len1, int len2) {
    int total;
    total = len1 + len2;
    int array3[total];
    int i=1,j=1,k=1;
    while (i <= len1 || j <= len2) {
        if (j>len2) {
            array3[k-1] = array1[i-1];
            i++ ; k++ ; continue;
        }
        else if (i>len1) {
            array3[k-1] = array2[j-1];
            j++ ; k++ ; continue;
        }
        if (array1[i-1] >= array2[j-1]) {
            array3[k-1] = array2[j-1];
            j++;
        }
        else if (array1[i-1] <= array2[j-1]) {
            array3[k-1] = array1[i-1];
            i++;
        }
        k++;
    }
    for (int m=0; m < total; m++) {
        cout << array3[m] << " ";
    }
}

int main() {
    int x,y;
    cout << "Enter no. of elements for the first array: ";
    cin >> x;
    cout << "Enter no. of elements for the second array: ";
    cin >> y; 
    int array2[y]; int array1[x];
    cout << "\n** ENTER SORTED ARRAYS ONLY **\n" << endl;
    for (int z = 0; z < x; z++) {
        int store;
        cout << "Enter element for list 1:";
        cin >> store;
        array1[z] = store;
    }
    for (int z = 0; z < y; z++) {
        int store;
        cout << "Enter element for list 2:";
        cin >> store;
        array2[z] = store;
    }
    Merge(array1, array2, x, y);
}