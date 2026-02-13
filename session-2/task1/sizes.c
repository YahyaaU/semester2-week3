
/*
 * Use the sizeof() operator to examine memory use 
 * of primitive types char,int,float
 */

#include <stdio.h>

int main( void ) {

    char testChar;
    int testInt;
    float testFloat;
    short testShort;
    long testLong;
    double doubleFloat;

    printf("Char size is %ld bytes\n",sizeof(testChar));
    printf("Int size is %ld bytes\n",sizeof(testInt));
    printf("Float size is %ld bytes\n",sizeof(testFloat));
    printf("Short Integer size is %ld bytes\n",sizeof(testShort));
    printf("Long integer size is %ld bytes\n", sizeof(testLong));
    printf("Double size is %ld bytes\n",sizeof(doubleFloat));
    return 0;
}
