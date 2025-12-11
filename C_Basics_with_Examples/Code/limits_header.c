#include<stdio.h>
#include<limits.h>
main()
{
    printf("Signed short min value: %d \n", SHRT_MIN);      // Signed short min value: -32768 
    printf("Signed short max value: %d \n", SHRT_MAX);      // Signed short max value: 32767
    printf("Unsigned short max value: %u \n", USHRT_MAX);   // Unsigned short max value: 65535
    printf("Signed int min value: %d \n", INT_MIN);         // Signed int min value: -2147483648
    printf("Signed int max value: %d \n", INT_MAX);         // Signed int max value: 2147483647
    printf("Unsigned int max value: %u \n", UINT_MAX);      // Unsigned int max value: 4294967295
    printf("Signed long min value: %d \n", LONG_MIN);       // Signed long min value: -2147483648
    printf("Signed long max value: %d \n", LONG_MAX);       // Signed long max value: 2147483647
    printf("Unsigned long max value: %u \n", ULONG_MAX);    // Unsigned long max value: 4294967295
    printf("Signed char min value: %d \n", CHAR_MIN);       // Signed char min value: -128
    printf("Signed char max value: %d \n", CHAR_MAX);       // Signed char max value: 127
    printf("Unsigned char max value: %u \n", UCHAR_MAX);    // Unsigned char max value: 255
}