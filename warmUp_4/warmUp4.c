#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char word[] = "Hello there, my name is Ford Prefect!";
    int strLength;
    for(int x=0; word[x]!='\0'; x++)
    {
        strLength=x+1;
    }
    char newWord[strLength];
    for(int x=strLength; x>=0; x--)
    {
        newWord[strLength-1-x] = word[x];
    }
    printf("New word: %s\n",newWord);
    
    return EXIT_SUCCESS;
}