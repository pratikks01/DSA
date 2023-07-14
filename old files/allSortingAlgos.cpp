#include <bits/stdc++.h>

using namespace std;
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
}
class Solution {
   public:
    // 1
    void selectionSort(int arr[], int n) {
        // code here
        // TC -> O(N^2), SC -> O(1), UNSTABLE IN PLACE SORTING ALGORITHM
        for (int i = 0; i < n - 1; i++) {
            int iMini = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[iMini]) iMini = j;
            }
            int temp = arr[i];
            arr[i] = arr[iMini];
            arr[iMini] = temp;
        }
    }

    // 2
    void bubbleSort(int arr[], int n) {
        // Your code here
        // TC -> O(N^2), SC -> O(1), STABLE IN PLACE SORTING ALGORITHM
        for (int i = 0; i < n - 1; i++) {
            int flag = 0;
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    // swap(arr[j],arr[j+1]);
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    flag = 1;
                }
            }
            if (flag == 0) break;
        }
    }

    // 3
    void insertionSort(int arr[], int n) {
        // code here
        // TC -> O(N^2), SC -> O(1), STABLE IN PLACE SORTING ALGORITHM

        for (int i = 1; i < n; i++) {
            int val = arr[i];
            int hole = i;
            while (hole > 0 && arr[hole - 1] > val) {
                arr[hole] = arr[hole - 1];
                hole -= 1;
            }
            arr[hole] = val;
        }
    }

    // 4
};
int main() {
    int arr[] = {56, 9, 4, 3, 1, 3, 0, 6, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    Solution ob;
    // ob.selectionSort(arr, n);
    // printArray(arr, n);
    return 0;
}