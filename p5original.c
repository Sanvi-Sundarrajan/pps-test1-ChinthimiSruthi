#include <stdio.h>
int main()
{
    int a=5;
    int b=4;
    int c=8;
    if(a>b && b>c)
    {
        printf("%d is greater\n",a);
    }
    else if(b>c)
    {
        printf("%d is greater\n",b);
    }
    else
    {
        printf("%d is greater\n",c);
    }
    return 0;
}
