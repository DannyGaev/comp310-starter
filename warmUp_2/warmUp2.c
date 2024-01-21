#include <stdio.h>

int main()
{
    int firstNum;
    int secondNum;

    printf("Please type the first number: \n");
    scanf("%d",&firstNum);

    printf("Please type the second number: \n");
    scanf("%d",&secondNum);

    printf("The sum of your numbers is %d\n",firstNum+secondNum);
    printf("The product of your numbers is %d\n",firstNum*secondNum);
    printf("The difference of your numbers is %d\n",firstNum-secondNum);
    printf("The quotient of your numbers is %d\n",firstNum/secondNum);

    return 0;
}