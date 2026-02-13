
/*
 * Use the address and dereferencing operators on variables and pointers 
 * Display value and addres data via the variable and then via the pointer
 */

#include <stdio.h>

int main( void ) {

    float testFloat = 3.14;
    float* testFloatPtr; // this is a pointer which points to a memory address

    testFloatPtr = &testFloat;  // the float pointer (testFloatPtr) is set to the address of the float variable (testFloat)
    
    printf("The value of the float variable is  %f\n",testFloat);
    printf("The address of the float variable is %p \n",&testFloat); //the address of the variable in memory

    printf("The value of the pointer is  %p\n",testFloatPtr); // pointer value at memory address...
    printf("The value that the pointer dereferences to is  %f\n",*testFloatPtr); // get our integer variable

    return 0;
}
