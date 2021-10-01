#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
    int i, key, j;
    int count = 0;

    for (i = 1; i <= n; i++) {
        key = arr[i];
        j = i - 1;

        cout << "Buoc " << count << ": ";
            for (int k = 0; k < i; k++)
                cout << arr[k] << " ";
        cout << endl;
        count++;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }


        arr[j + 1] = key;

    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    insertionSort(arr, n);

    return 0;
}