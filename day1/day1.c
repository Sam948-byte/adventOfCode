#include <stdio.h>

int main()
{
    char *filename = "input.txt";
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: could not open file %s", filename);
        return 1;
    }

    // reading line by line, max 256 bytes
    const unsigned MAX_LENGTH = 256;
    char buffer[MAX_LENGTH];

    // greatest calorie value and the array
    int greatestValue;
    int i = 0;
    int array[100];

    while (fgets(buffer, MAX_LENGTH, fp))
    if(buffer == '\n'){
        atoi(buffer)
        i = 0;
    }
    // close the file
    fclose(fp);

    return 0;
}