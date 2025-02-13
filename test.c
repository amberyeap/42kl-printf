#include <stdio.h>
#include <limits.h>
#include <stdarg.h>

// Assuming the TEST macro is defined as follows:
#define TEST(id, expr) do { \
    printf("Test %d: ", id); \
    expr; \
    printf("\n"); \
} while (0)

// Wrapper around printf
int print(const char* format, ...) {
    va_list args;
    va_start(args, format);
    int result = vprintf(format, args);
    va_end(args);
    return result;
}

int main() {
    TEST(6, print(" %p %p ", (void *)LONG_MIN, (void *)LONG_MAX));
    TEST(7, print(" %p %p ", (void *)INT_MIN, (void *)INT_MAX));
    TEST(8, print(" %p %p ", (void *)ULONG_MAX, (void *)(-ULONG_MAX)));

    return 0;
}

// // #include <stdio.h>
// #include "ft_printf.h"

// int main() {
//     int num1 = 42;
//     int num2 = 255;
//     int num3 = 0;
//     int num4 = 123456;
//     int num5 = -1;

//     // Testing the %x format specifier (lowercase hexadecimal)
//     ft_printf("Lowercase Hexadecimal:\n");
//     ft_printf("42 as hex: %x\n", num1);
//     ft_printf("255 as hex: %x\n", num2);
//     ft_printf("0 as hex: %x\n", num3);
//     ft_printf("123456 as hex: %x\n", num4);
//     ft_printf("-1 as hex: %x\n", num5);

//     // Testing the %X format specifier (uppercase hexadecimal)
//     ft_printf("\nUppercase Hexadecimal:\n");
//     ft_printf("42 as hex: %X\n", num1);
//     ft_printf("255 as hex: %X\n", num2);
//     ft_printf("0 as hex: %X\n", num3);
//     ft_printf("123456 as hex: %X\n", num4);
//     ft_printf("-1 as hex: %X\n", num5);

// 	// int var = 42;
//     // int *ptr = &var;
//     // void *void_ptr = ptr;

//     // Testing the %p specifier
//     // printf("\nPointer value (int *): %p\n", (void *)ptr);
//     // printf("Pointer value (void *): %p\n", void_ptr);

// 	// Testing the %d specifier
// 	int test_int1 = 42;
//     int test_int2 = -42;
//     int test_int3 = 0;

//     ft_printf("\nTesting %%d with positive integer: %d\n", test_int1);
//     ft_printf("Testing %%d with negative integer: %d\n", test_int2);
//     ft_printf("Testing %%d with zero: %d\n", test_int3);


//     return 0;
// }
