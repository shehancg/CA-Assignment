#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
int main()
{
    int i,num,sqr;
    time_t t;   // not a primitive datatype
    time(&t);
    for(i=1;i<=5;i++)
    {
        printf("Enter the number ");
        scanf("%d",num);
        sqr=num*num;
        printf("%d",sqr);
        printf("%s", ctime(&t));
    }
    return 0;
}
