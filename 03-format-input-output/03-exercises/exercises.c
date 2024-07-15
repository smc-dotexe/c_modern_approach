/* Chapter 3 exercises */

#include <stdio.h>

int main()
{
    // "??" = my answer
    // "a:" = actual answer
    // 1
    // a
    printf("1a\n");
    printf("%6d, %4d\n", 86, 1040);
    // ??: "86----", "1040" // "-" = space
    // a: "----86", "1040"

    // b
    printf("1b\n");
    printf("%12.5e\n", 30.253);
    // ??:" 3.0253e+01"
    // a: " 3.02530e+01"

    // c 
    printf("1c\n");
    printf("%.4f\n", 83.162);
    // ??: "83.1620"
    // a: "83.1620"

    // d
    printf("1d\n");
    printf("%-6.2g\n", .0000009979);
    // ?? 1.0
    // a: 1e-06

    printf("\n");
    printf("2\n");
    // 2
    float x = 3.254;
    printf("2a\n"); // Exponential notation, left-justified in a field of size 8, one digit after the decimal point
    printf("%-8.1e\n", x);

    printf("2b\n"); // Exponential notation, right-justified in a field of size 10; six digits after the decimal point.
    printf("%10.6e\n", x);

    printf("2c\n"); // Fixed decimal notation; left-justified in a field size of 8; three digits after the decimal point
    printf("%-8.3f\n", x);

    printf("2d\n"); // Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal point
    printf("%6.0f\n", x);
    return 0;
}