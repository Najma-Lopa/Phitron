#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            if(b>c)
                printf("the acending order:%d,%d,%d",c,b,a);
            else
                printf("the accending order:%d,%d,%d",b,c,a);
        }
        else
            printf("the accending order:%d,%d,%d",b,a,c);
    }
    else
    {
        if(b>c)
        {
            if(a>c)
                printf("the accending order:%d,%d,%d",c,a,b);
            else
                printf("the accending order:%d,%d,%d",a,c,b);

        }
        else
            printf("the accending order:%d,%d,%d",a,b,c);

    }

return 0;
}
