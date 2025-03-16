 
#include <stdio.h>

int main() {
    int num = 0x7;
    char byte1 = (num >> 24) & 0xFF;
    char byte2 = (num >> 16) & 0xFF;
    char byte3 = (num >> 8) & 0xFF;
    char byte4 = num & 0xFF;
    printf("Byte1: %x\n", byte1);
    printf("Byte2: %x\n", byte2);
    printf("Byte3: %x\n", byte3);
    printf("Byte4: %x\n", byte4);

    return 0;
}