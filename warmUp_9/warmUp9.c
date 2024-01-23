#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fptr;
    fptr = fopen("file.txt","w");
    fprintf(fptr,"Hello there!");
    fclose(fptr);

    fptr = fopen("file.txt","r");
    char fileContents[100];
    fgets(fileContents,100,fptr);
    printf("Contents of the file: %s\n",fileContents);
    fclose(fptr);
    return EXIT_SUCCESS;
}