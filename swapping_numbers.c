#include <stdio.h>
#include <stdlib.h>

int main()
{
    //assigning two variables
    int a,b;
    // asking the user to enter two numbers and it stores in a and b variable.
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    // Adding both a and b value.
    a=a+b;
    // subtracting the current sum value of a from b.
    b=a-b;
    // subtracting the a value from the current value of b.
    a=a-b;
    // giving the output a and b shows like swapping.
    printf("The swapped numbers are a=%d and b=%d", a,b );

    return 0;
