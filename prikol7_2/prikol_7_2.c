#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* string() {
    int size = 16; // начальный размер буфера
    int length = 0; 
    char* buffer = malloc(size); // выделение памяти под буфер
    int c; // текущий символ
    while ((c = getchar()) != '\n' && c != EOF) {
        if (length == size - 1) { // если буфер заполнен, увеличиваем его размер
            size *= 2;
            char* new_buffer = realloc(buffer, size);
            if (new_buffer == NULL) {  //ошибка выделения памяти 
                free(buffer);
                return NULL;
            }
            buffer = new_buffer;
        }
        buffer[length] = c;
        length++;
    }
    buffer[length] = '\0'; 
    char* result = malloc(length + 1); // выделение памяти под итоговую строку
    if (result == NULL) { //ошибка выделения памяти 
        free(buffer);
        return NULL;
    }
    strcpy(result, buffer); // копируем буфер в итоговую строку
    free(buffer);
    return result; // указатель на итоговую строку
}

