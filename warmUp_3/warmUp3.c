#include <stdio.h>

int main()
{
    int numbers[5] = {1,2,3,4,5};
    int sum = 0;
    for(int x=0; x<5; x++)
    {
        sum+=numbers[x];
    }
    printf("The sum of the array is %d\n",sum);
    printf("The average of the numbers in the array is %d\n",sum/5);
}