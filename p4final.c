#include <stdio.h>
int input()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    return n;
}
int cmp(int a,int b,int c)
{
    int large;
    if(a<b&&b>c)
    {
        return a;
    }
    else if(b>a&&b>c)
    {
        return b;
    }
    else if(c>b&&c>a)
    {
        return c;
    }
}
void output(int a,int b,int c,int large)
{
    printf("The largest number of %d,%d,%d is %d\n",a,b,c,large);
}
int main()
{
    int n1,n2,n3,large;
    n1=input();
    n2=input();
    n3=input();
    large=cmp(n1,n2,n3);
    output(n1,n2,n3,large);
    return 0;
