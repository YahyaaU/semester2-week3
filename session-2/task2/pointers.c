#include <stdio.h>

int main(void) {


int age = 18;
int *ptr = &age;

*ptr = 21;

printf("The age of this guy is %d\n", age);
printf("The value stored in ptr is %p\n", ptr);
printf("The value that ptr points to is %d\n", *ptr);

return 0;

}