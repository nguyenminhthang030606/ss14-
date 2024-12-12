#include <stdio.h>

int main() {
    char str[100]; 
    int i, length = 0;
    printf("Nhap mot chuoi: ");
    gets(str); 
    while (str[length] != '\0') {
        length++;
    }
    printf("Chuoi dao nguoc la: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}

