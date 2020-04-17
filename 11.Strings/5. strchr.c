#include <stdio.h>
#include <string.h>

int main()
{
    const char str[] = "This is just a String";
    const char ch = 'u';

    char *p;
    
    p = strchr(str, ch);
    
    printf("String starting from %c is: %s", ch, p);
    
    return 0;
}