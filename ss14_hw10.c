#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "bcdac";
    int tan_so[256] = {0};
    for (int i = 0; i < strlen(chuoi); i++) {
        tan_so[(int)chuoi[i]]++;
    }
    printf("Cac ki tu và so lan xuat hien:\n");
    for (int i = 0; i < 256; i++) {
        if (tan_so[i] > 0) {
            printf("%c: %d\n", i, tan_so[i]);
        }
    }
    return 0;
}

