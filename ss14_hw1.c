#include <stdio.h>

int main() {
    char input[1000]; 

    printf("Nhap vao mot chuoi bat ky:\n");
    fgets(input, sizeof(input), stdin); 

    printf("Chuoi ban vua nhap la:\n%s", input); 

    return 0;
}

