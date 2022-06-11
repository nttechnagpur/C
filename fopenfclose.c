//fopen() is used to open and fclose() is used to close a file in C
#include<stdio.h>
#include<stdlib.h> // For exit()
int main()
{
    FILE *fptr;
    char filename[100], c;
    printf("Enter the filename to open \n");
    scanf("%s", filename);
    // Open file
    fptr = fopen(filename, "r");
    if (fptr == NULL){
        printf("Cannot open file \n");
        exit(0);
    }
    // Read contents from file
    c = fgetc(fptr);
    while (c != EOF){
        printf ("%c", c);
        c = fgetc(fptr);
    }
    fclose(fptr);
    return 0;
}
