#include <stdio.h>
#include <stdlib.h>

int linearSearch(int a[], int num);

int main(int argc, char *argv[])
{
    int a[] = {1,4,7,9,12};
    int num = 9;

    int index = linearSearch(a,num);
    if(index > -1)
    {
        printf("Element was found at index %d in the array :3\n",index);
    }
    else
    {
        printf("Element was not found in the array :(\n");
    }

}

int linearSearch(int a[], int num)
{
    for(int i=0; i<sizeof(&a); i++)
    {
        if(a[i]==num)
        {
            return i;
        }
    }
    return -1;
}