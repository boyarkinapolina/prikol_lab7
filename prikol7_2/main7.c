#include <stdio.h>
#include "sem7.h"
#include <stdlib.h>

int main() {
    printf("Write string: ");
    char* str = string();
    printf("You entered: %s", str);
    free(str); 
    return 0;
}