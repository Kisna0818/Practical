#include<stdio.h>
int main()
{
    int n,a,b,c,d;
    printf("Your Calculator\n1. Add\n2. Mul\n3. Divide\n Enter the values of a,b,n respectively\n");
    scanf("%d %d %d",&a,&b,&n);
    switch(n)
    {
        case 1: printf("\na-b = %d",a-b);break;
        case 2: printf("\na*b = %d",a*b);break;
        case 3: printf("\na/b = %d",a/b);break;
    }
    return 0; // Let's run
}
