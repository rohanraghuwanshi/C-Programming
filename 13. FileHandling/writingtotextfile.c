#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("test.txt", "w+");
    
    fprintf(fp, "This is text goes in the file...\n");
    
    fputs("This text also goes into the file...\n", fp);
    
    fclose(fp);

    return 0;
}