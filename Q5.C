#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int num = 0x12345678;
    char *ptr = (char *)&num;
    int i;

    printf("Enter a number: %x\n", num);
    printf("Byte0: %x\n", ptr[0]);
    printf("Byte1: %x\n", ptr[1]);
    printf("Byte2: %x\n", ptr[2]);
    printf("Byte3: %x\n", ptr[3]);

    printf("\nChecking Endianness\n");
    if (ptr[0] == 0x12) {
        printf("Little Endian\n");
    } else if (ptr[3] == 0x12) {
        printf("Big Endian\n");
    } else {
        printf("Unknown Endianness\n");
    }

    printf("\nConverting Endianness\n");
    if (ptr[0] == 0x12) {
        printf("Little to Big Endian\n");
        for (i = 0; i < sizeof(num) / 2; i++) {
            char temp = ptr[i];
            ptr[i] = ptr[sizeof(num) - i - 1];
            ptr[sizeof(num) - i - 1] = temp;
        }
    } else if (ptr[3] == 0x12) {
        printf("Big to Little Endian\n");
        for (i = 0; i < sizeof(num) / 2; i++) {
            char temp = ptr[i];
            ptr[i] = ptr[sizeof(num) - i - 1];
            ptr[sizeof(num) - i - 1] = temp;
        }
    }

    printf("\nByte0: %x\n", ptr[0]);
    printf("Byte1: %x\n", ptr[1]);
    printf("Byte2: %x\n", ptr[2]);
    printf("Byte3: %x\n", ptr[3]);

    return 0;
}