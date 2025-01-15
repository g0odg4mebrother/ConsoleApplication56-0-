#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    const int SIZE = 5; // Размер массива 
    int arr1[] = { 10, 20, 30, 40, 50 };

    int arr2[SIZE];

    int* ptr1 = arr1;
    int* ptr2 = arr2;

    for (int i = 0; i < SIZE; ++i) {
        *ptr2++ = *ptr1++;
    }

    cout << "Копированный массив:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    int* start = arr1;
    int* end = arr1 + SIZE - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    // Вывод измененного массива
    cout << "Массив с обратным порядком:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}