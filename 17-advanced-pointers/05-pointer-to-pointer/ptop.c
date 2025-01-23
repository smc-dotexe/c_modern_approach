// demonstrates the concept of pointer to pointer

#include <stdio.h>

void modifyString(char **ptr) {
    *ptr = "Hello, world!";
}

int main() {
    char *str = "Original string";
    char **ptrToPtr = &str;

    printf("Before modification: %s\n", str);

    modifyString(ptrToPtr);

    printf("After modification: %s\n", str);

    return 0;
}