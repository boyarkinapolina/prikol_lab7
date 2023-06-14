#include <stdio.h>


void shellSort(int arr[], int n) {
    // Выбор шага для сортировки Шелла
    int gap = n / 2;

    // Повторяем сортировку с различными шагами
    while (gap > 0) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j = i;

            // Сдвигаем элементы, пока не будет найдено правильное место для вставки
            while (j >= gap && arr[j - gap] > temp) {
                arr[j] = arr[j - gap];
                j -= gap;
            }

            arr[j] = temp;
        }

        gap /= 2;
    }
}