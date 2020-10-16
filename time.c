#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void main()
{
time_t t=time(0);   // not a primitive datatype
    time(&t);
    printf("%s", ctime(&t));
    return 0;
}
