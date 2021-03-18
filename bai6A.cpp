#include<iostream>
using namespace std;


int vonglapfor(int key, int a[], int low, int high) {
    while (low != high) {
        if (low > high) return -1;
        int mid = (low + high) / 2;
        if (a[mid] == key) return mid;
        if (a[mid] > key) {
            high = mid - 1;
        }
        else if (a[mid] < key) {
            low = mid + 1;
        }
    }
    return low;
}

int dequy(int key, int *a, int low, int high) {
    if (high < low) return -1;
    int mid = (low + high) / 2;
    if (a[mid] == key) return mid;
    if (a[mid] > key) return dequy(key, a, low, mid - 1);
    if (a[mid] < key) return dequy(key, a, mid + 1, high);
}

int main() {
    int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 10, 11 };
    int key;
    cin >> key;
    cout << vonglapfor(key, a, 0, 11) << endl;
    cout << dequy(key, a, 0, 11) << endl;
    return 0;
}
