#include <stdio.h>
#include <stdlib.h>

int factorial(int n);

int main(int argc, char *argv[])
{
    int num = 5;
    printf("The factorial of %d is %d\n",num,factorial(num));

    return EXIT_SUCCESS;

}

int factorial(int n)
{
    if(n <= 1)
    {
        return n;
    }
    else
    {
        return n * factorial(n-1);
    }
}