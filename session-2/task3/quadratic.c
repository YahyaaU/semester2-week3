
/*
 * Compute the roots of quadratic equation.
 * We will assume that 2 real roots exist at this point.
 * The equation is specified with 3 real constants a,b,c
 *    a.x^2 + b.x + c = 0
 */

#include <stdio.h>
#include <math.h>

int main( void ) {

    float a = 1.0; // a = Co-efficient of x^2
    float b = -5.0; // b = Co-efficient of x
    float c = 6.0; // c = constant
    float root1, root2; // defines 2 variables root1 and root2
    float discriminant = b*b - 4*a*c; // b^2 - 4ac = discriminant
    float sqrtX = sqrt(discriminant); // square roots the discriminant using the 'sqrt' function from the math library

    root1 = (-b + sqrtX) / (2*a); // Computes the first root
    root2 = (-b - sqrtX) / (2*a); // Computes the second root

    printf("Root 1: %f\n", root1); // prints root1
    printf("Root 2: %f\n", root2); // prints root2


    /*
     * Implement the formula for the 2 roots of a quadratic.
     * You can define additional variable for intermediate results to make the code simpler.
     * Print out the final results for the 2 roots as float values.
     */
    // 
    

    return 0;
}
