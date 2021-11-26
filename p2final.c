#include <stdio.h>
int input()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    return a;
}
void add(int a,int b)
{
    int sum;
    sum = a + b;
}
void output(int a,int b,int sum)
{
    printf("Sum of %d + %d is %d\n",a,b,sum);
}
int main()
{
    int x,y,z;
    x=input();
    y=input();
    z=input();
    output(x,y,z);
    return 0;
    
}
