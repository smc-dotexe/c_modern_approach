// notepad for memory allocation
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *concat(const char *s1, const char *s2) { // using const to prevent changing the original inputs
    char *result;

    result = malloc(strlen(s1) + strlen(s2) + 1);
    if (result == NULL) {
        printf("Error: malloc failed to concat\n");
        exit(EXIT_FAILURE);
    }

    strcpy(result, s1);
    strcat(result, s2);
    return result;
}

int main() {
    // using malloc, check for a NULL pointer
    size_t size = 1000;
    void* p = (int *)malloc(size);

    if (p == NULL) {
        printf("Allocation failed\n");
    } else {
        printf("Allocation ok\n");
    }

    // using malloc to allocate storage for a string
    size_t string_size = 20;
    char *string_ptr = (char *)malloc(string_size+1); // +1 is space for the null terminator

    if (p == NULL) {
        printf("Allocation failed\n");
    } else {
        printf("Allocation ok\n");
    }

    // concatenating two strings by returning a new string and not mutating the original inputs.
    char s1[100], s2[100];
    printf("first string: \n");
    scanf("%99s", s1); // limiting to avoid overflow.
    printf("second string: \n");
    scanf("%99s", s2);

    char *result = concat(s1, s2);

    // "%s" expects a pointer to the start of a null-terminated string.
    // it treats the pointer as the starting address of the string, then reads
    // and prints characters from that address until it finds a null terminator.
    // "result" is a pointer that points to the dynamically allocated memory 
    // containing the concentrated string.
    // "%s" format specifier tells printf to dereference result and print the string
    // stored at the address "result" points to, not the address itself.
    printf("Concatenated result: %s\n", result);

    // Free allocated memory
    free(result);
    free(string_ptr);

    int x = 42;       // A variable 'x' holding the value 42
    int *ptr = &x;    // 'ptr' is a pointer to 'x' (stores the address of 'x')

    printf("%p\n", (void *)ptr); // Prints the address of 'x' (the pointer)
    printf("%d\n", *ptr);        // Dereferences 'ptr' to print the value of 'x' (42)

    return 0;
}

