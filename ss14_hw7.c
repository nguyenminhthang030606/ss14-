#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[] = "ffhh1122"; // Chu?i �?u v�o
    int size = strlen(text);
    int letter_count = 0; // �?m k? t? ch? c�i
    int digit_count = 0;  // �?m k? t? s?

    for (int i = 0; i < size; i++) {
        if (isalpha(text[i])) {
            letter_count++;
        }
        if (isdigit(text[i])) {
            digit_count++;
        }
    }

    printf("So ky tu chu cai: %d\n", letter_count);
    printf("So ky tu so: %d\n", digit_count);

    return 0;
}
