#include <stdio.h>

int main() {
    char str[] = "Hello, how are you?"; 
    char ch;                         
    int count = 0;                  
    printf("Chuoi ban dau: %s\n", str);
    printf("Nhap mot ky tu can tim: ");
    scanf("%c", &ch);
    
     for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", ch, count);
    return 0;
}

