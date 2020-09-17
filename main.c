#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int StringLength(char *);

int main()
{
   char * x = "hello world";

   StringLength(x);

    return 0;
}

int StringLength(char * str)
{
    printf("%d" , strlen(str));

    return str;
}
