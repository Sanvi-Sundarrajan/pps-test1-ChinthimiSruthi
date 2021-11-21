#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter an integer number\n",n);
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        sum+=i;
    }
    printf("1+2+3+4+5 is %d\n",sum);
    return 0;
}
