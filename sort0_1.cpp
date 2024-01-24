#include <iostream>
using namespace std;

void sorting(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        while (arr[start] == 0 && start < end) {
            start++;
        }
        while (arr[end] == 1 && start < end) {
            end--;
        }
        if (start < end) {
            arr[start]=0;
            arr[end]=1;
            start++;
            end--;
        }
    }
}

int main() {
    int n;
    cout << "enter size of array: ";
    cin >> n;

    int arr[100];
    cout << "enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sorting(arr, n);
    cout << "array after sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}