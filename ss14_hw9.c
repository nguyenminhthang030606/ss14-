#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "hello world", ky_tu;

    printf("Nhap ki tu can xoa: ");
    scanf(" %c", &ky_tu);

    for (int i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] != ky_tu) {
            printf("%c", chuoi[i]);
        }
    }
    printf("\n");

    return 0;
}

