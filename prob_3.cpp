#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
// argc - will be the count of input arguments to your program.
// argv - will be a pointer to all the input arguments.
{
    char filename[50];
    printf("Enter the Filename : ");
    scanf("%s", &filename);
    char line[50];
    FILE *fp = fopen(filename, "r"); // "r" for read

    // fp means "file pointer"

    if (fp == NULL)
    {
        printf("No file found, please insert a correct name.\n");
        exit(1);
    }
    while (fgets(line, 30, fp) != NULL) // fgets reads a limited number of characters
    {
        printf(line);
    }
    fclose(fp);

    return 0;
}