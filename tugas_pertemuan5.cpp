#include <iostream>
using namespace std;

int binarySearch(int data[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (data[mid] == target) {
            return mid;
        } else if (target < data[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return -1;
}

int main() {
    // Array data nilai mahasiswa (sudah terurut secara ascending)
    int dataNilai[] = {55, 60, 68, 75, 80, 85, 90, 95};
    int n = 8;
    int target;

    cout << "Masukkan nilai mahasiswa yang ingin dicari: ";
    cin >> target;

    int hasil = binarySearch(dataNilai, n, target);

    if (hasil != -1) {
        cout << "Data ditemukan pada indeks : " << hasil << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
}