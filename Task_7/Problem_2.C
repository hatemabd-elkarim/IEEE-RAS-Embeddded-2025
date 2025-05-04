/*
-Use typedef keyword to rename all primitive data-types and print the size of each one of them with their new name
(Try to think of a new naming method that helps identify what data-type this new name points to...)
*/

#include <stdio.h>
/*
Naming Rules:
u -> unsigned
for any number n -> n bits
int -> integers
floar -> real numbers
T_ -> typedef 
ex: uint8_t -> unsigned integer value of 8 bits size typedef "unsigned char"
*/

// Integer types
typedef signed char               T_int8;
typedef unsigned char             T_uint8;
typedef short                     T_int16;
typedef unsigned short            T_uint16;
typedef int                       T_int32;
typedef unsigned int              T_uint32;
typedef long                      T_int64;
typedef unsigned long             T_uint64;
typedef long long                 T_int128;  // Long long is commonly used as 64-bit but typedef as 128 for clarity
typedef unsigned long long        T_uint128;

// Floating-point types
typedef float                      T_float32;
typedef double                     T_float64;

int main() {
    // Printing the sizes of the typedefs
    printf("Size of signed char         : %d bytes\n", sizeof(T_int8));
    printf("Size of unsigned char       : %d bytes\n", sizeof(T_uint8));
    printf("Size of signed short        : %d bytes\n", sizeof(T_int16));
    printf("Size of unsigned short      : %d bytes\n", sizeof(T_uint16));
    printf("Size of signed int          : %d bytes\n", sizeof(T_int32));
    printf("Size of unsigned int        : %d bytes\n", sizeof(T_uint32));
    printf("Size of signed long         : %d bytes\n", sizeof(T_int64));
    printf("Size of unsigned long       : %d bytes\n", sizeof(T_uint64));
    printf("Size of signed long long    : %d bytes\n", sizeof(T_int128));
    printf("Size of unsigned long long  : %d bytes\n", sizeof(T_uint128));
    printf("Size of float               : %d bytes\n", sizeof(T_float32));
    printf("Size of double              : %d bytes\n", sizeof(T_float64));

    return 0;
}
