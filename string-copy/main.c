#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* combineString(char* str1, void* str2) {
    char* str22 = (char*) str2;
    char* buffer = malloc(1024);
    strcat(buffer, str1);
    strcat(buffer, " ");
    strcat(buffer, str22);
    return buffer;
}

int main() {
    char* str1 = "1231 S. Goldenwest Ave.";
    char* str2 = "Unit 10 Arcadia CA 91007";

    char* fullAddr = combineString(str1, str2);

    printf("\naddress = %s", fullAddr);
    printf("\nsize of address = %d", strlen(fullAddr));


    return 0;
}
