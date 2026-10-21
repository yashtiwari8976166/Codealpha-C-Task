#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    printf("1 for addion\n,2 for subtraction\n,3 for multiplication\n,4 for division\n");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        printf("addition=%d",a+b);
        break;
    case 2:
        printf("subtraction=%d",a-b);
        break;
    case 3:
        printf("multiplication=%d",a*b);
        break;
    case 4:
        printf("division=%d",a/b);
        if(b==0)
            printf("not define");
        break;
    default:
        printf("invalid operator");
    }
    return 0;
}