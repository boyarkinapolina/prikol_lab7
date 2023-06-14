#include <stdio.h>
#include "sem7.h" 

int main() {
    int n;
    printf("Ingrese la longitud de la matriz: ");            //Ввод длины массива p.s это испанский)) 
    scanf("%d", &n);

    int arr[n];
    printf("Introduzca los elementos de la matriz: ");        //Ввод элементов массива 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    shellSort(arr, n);

    printf("La matriz: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}