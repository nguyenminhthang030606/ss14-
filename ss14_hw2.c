#include <stdio.h>

int main() {
    char str[] = "Hello, World!"; 
    printf("Chuoi goc: %s\n", str);
    printf("Cac ky tu trong chuoi (cach nhau 1 dau cach):\n");
    
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]); 
    }
    printf("\n"); 
    return 0;
}

