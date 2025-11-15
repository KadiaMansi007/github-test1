#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("Data Type Information in C\n");
    printf("--------------------------------------\n");
    printf("char: \n");
    printf("   Size: %zu bytes\n", sizeof(char));
    printf("   Range: %d to %d\n\n", CHAR_MIN, CHAR_MAX);
    printf("int: \n");
    printf("   Size: %zu bytes\n", sizeof(int));
    printf("   Range: %d to %d\n\n", INT_MIN, INT_MAX);
    printf("float: \n");
    printf("   Size: %zu bytes\n", sizeof(float));
    printf("   Range: %.3e to %.3e\n\n", FLT_MIN, FLT_MAX);
    printf("double: \n");
    printf("   Size: %zu bytes\n", sizeof(double));
    printf("   Range: %.3e to %.3e\n\n", DBL_MIN, DBL_MAX);
    printf("short: \n");
    printf("   Size: %zu bytes\n", sizeof(short));
    printf("   Range: %d to %d\n\n", SHRT_MIN, SHRT_MAX);
    printf("long: \n");
    printf("   Size: %zu bytes\n", sizeof(long));
    printf("   Range: %ld to %ld\n\n", LONG_MIN, LONG_MAX);
    return 0;
}
